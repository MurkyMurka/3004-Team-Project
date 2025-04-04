#include "insulinpump.h"

InsulinPump::InsulinPump(QTextBrowser *_tubeDisplay, QPushButton *_tubeButton) : tubeDisplay(_tubeDisplay) , tubeButton(_tubeButton) {
   numInsulin = 0;
   numTube = 0;
   numCannula = 0;
   iOB = 0;
   refillingTubing = false;
   tubeButton->setStyleSheet("color: green;");
}

void InsulinPump::refillCartridge(float incomingUnits) {
    numInsulin = incomingUnits;
}

void InsulinPump::startStopRefillTubing() {
   if(!refillingTubing) {
       if(numTube < MAX_TUBE) {
            tubeButton->setText("Stop");
            tubeButton->setStyleSheet("color: red;");
            
            QThread* thread = QThread::create([this]() {
                refillTubing();
            });
        
            // Auto-delete the thread when it finishes
            connect(thread, &QThread::finished, thread, &QObject::deleteLater);
        
            thread->start();
        }
   }else {
       if(numTube >= MIN_TUBE) {
            tubeButton->setText("Start");
            tubeButton->setStyleSheet("color: green;");
            refillingTubing = false;
       }
   }
}

void InsulinPump::refillTubing() {
    QVector<float> val = {1.2, 1.5, 1.7, 2.1};
    int index = 0;
    refillingTubing = true;
    while(refillingTubing) {
        if(numTube < MIN_TUBE) {
            tubeButton->setEnabled(false);
        }else {
            tubeButton->setEnabled(true);
        }
        numTube += val[index];
        if(numTube >= 20) {
            numTube = MAX_TUBE;
            startStopRefillTubing();
        }
        
        QMetaObject::invokeMethod(this, [this]() {
            tubeDisplay->setText(QString::number(numTube));
        }, Qt::QueuedConnection);
        
        index = (index + 1) % val.size();
        QThread::msleep(500);
    }
}

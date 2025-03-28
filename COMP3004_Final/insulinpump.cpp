#include "insulinpump.h"

InsulinPump::InsulinPump() {
    numInsulin = 0;
    numTube = 0;
    numCannula = 0;
    iOB = 0;
    refillingTubing = false;
}

void InsulinPump::refillCartridge(float incomingUnits) {
    if(incomingUnits < MIN_INSULIN) {
        // Message saying too little insulin
    }else if(incomingUnits > MAX_INSULIN) {
        // Message saying too much insulin
    }else {
        numInsulin = incomingUnits;
    }
}

void InsulinPump::startStopRefillTubing() {
    if(!refillingTubing) {
        if(numTube < MAX_TUBE) {
            QtConcurrent::run(this, &InsulinPump::refillTubing);
        }
    }else {
        if(numTube >= MIN_TUBE) {
            refillingTubing = false;
        }
    }
}

void InsulinPump::refillTubing() {
    refillingTubing = true;
    QVector<float> val = {1.2, 1.5, 1.7};
    int index = 0;
    while(refillingTubing && numTube < 20) {
        if(numTube + val[index] >= 20) {
            numTube = MAX_TUBE;
            startStopRefillTubing();
        }
        numTube += val[index];
        index = (index + 1) % val.size();
        QThread::msleep(500);
    }
}

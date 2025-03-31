#ifndef INSULINPUMP_H
#define INSULINPUMP_H

#define MIN_INSULIN 95
#define MAX_INSULIN 300
#define MIN_TUBE 10
#define MAX_TUBE 20

#include <QObject>
#include <QtConcurrent/QtConcurrent>
#include <QThread>
#include <QVector>
#include <QTextBrowser>
#include <QPushButton>
#include <QString>
#include <iostream>

class InsulinPump : public QObject
{
   Q_OBJECT
public:
   explicit InsulinPump(QTextBrowser *_tubeDisplay, QPushButton *_tubeButton);
   ~InsulinPump() { /* Empty */}
   void refillCartridge(float incomingUnits);

public slots:
   void startStopRefillTubing();

private:
   float numInsulin;
   float numTube;
   float numCannula;
   float iOB;
   bool refillingTubing;
   QTextBrowser *tubeDisplay;
   QPushButton *tubeButton;

   void refillTubing();
};

#endif // INSULINPUMP_H

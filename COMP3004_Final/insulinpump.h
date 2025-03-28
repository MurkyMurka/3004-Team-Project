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

class InsulinPump : public QObject
{
    Q_OBJECT
public:
    explicit InsulinPump();
    ~InsulinPump() { /* Empty */}
    void refillCartridge(float incomingUnits);
    void refillTubing();

public slots:
    void startStopRefillTubing();

private:
    float numInsulin;
    float numTube;
    float numCannula;
    float iOB;
    bool refillingTubing;
};

#endif // INSULINPUMP_H

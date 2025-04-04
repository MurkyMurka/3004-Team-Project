#ifndef GRAPHMANAGER_H
#define GRAPHMANAGER_H

#include <QObject>

#include <QMainWindow>
#include <QtCore>
#include <QtGui>
#include <QtCharts>
#include "configdata.h"

class GraphManager: public QObject {
    Q_OBJECT
private:
    QChart* chart;
    QScatterSeries* series;
    QDateTimeAxis* axisX;
    QValueAxis* axisY;
    QLineSeries* horizontalLine;
    ConfigData *configData;

public:
   QChartView* createChartView();
   GraphManager(ConfigData *config, QObject *parent = nullptr);
   void addPoint(QDateTime timeStamp, double bloodGlucoseLevel);
   void changeRange(int range);
   ~GraphManager();


signals:
};

#endif // GRAPHMANAGER_H

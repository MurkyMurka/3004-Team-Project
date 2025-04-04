#include "graphmanager.h"

GraphManager::GraphManager(ConfigData *config, QObject *parent)
    : QObject{parent}
{
    configData = config;
    // Create Scatter Series for the data points
    series = new QScatterSeries();
    series->append(QDateTime::fromMSecsSinceEpoch(1000).toMSecsSinceEpoch(), 1);  // Example timestamp in milliseconds
    series->append(QDateTime::fromMSecsSinceEpoch(22000).toMSecsSinceEpoch(), 1);  // Example timestamp in milliseconds
    series->append(QDateTime::fromMSecsSinceEpoch(3000).toMSecsSinceEpoch(), 5);
    series->append(QDateTime::fromMSecsSinceEpoch(1000).toMSecsSinceEpoch(), 4);
    series->append(QDateTime::fromMSecsSinceEpoch(2000).toMSecsSinceEpoch(), 3);
    series->append(QDateTime::fromMSecsSinceEpoch(55000).toMSecsSinceEpoch(), 31);
    series->append(QDateTime::fromMSecsSinceEpoch(0).toMSecsSinceEpoch(), 5);

    // Create Chart
    chart = new QChart();
    chart->legend()->hide();
    chart->addSeries(series);

    // Set background color of the chart to black
    chart->setBackgroundBrush(QBrush(Qt::black));

    // Create and configure axes
    axisX = new QDateTimeAxis();
    axisX->setFormat("hh:mm:ss");  // Set the format to hours:minutes:seconds, or change it as needed
    axisX->setRange(configData->getCurDateTime().addSecs(-3600), configData->getCurDateTime());

    chart->addAxis(axisX, Qt::AlignBottom);
    series->attachAxis(axisX);

    axisY = new QValueAxis();
    axisY->setRange(0, 35);  // Set Y axis range
    chart->addAxis(axisY, Qt::AlignRight);
    series->attachAxis(axisY);

}


QChartView* GraphManager::createChartView()
{
    QChartView* chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);
    return chartView;
}

void GraphManager::addPoint(QDateTime timeStamp, double bloodGlucoseLevel){
    qint64 timeInMillis = timeStamp.toMSecsSinceEpoch();
    series->append(timeInMillis, bloodGlucoseLevel);
}

void GraphManager::changeRange(int range) {
    // Get the current time
    QDateTime currentTime = QDateTime::currentDateTime();

    // Calculate the start time (current time - range in hours)
    QDateTime startTime = currentTime.addSecs(-range * 3600);  // 3600 seconds per hour

    // Update the x-axis range
    axisX->setRange(startTime, currentTime);
}


GraphManager::~GraphManager()
{
    delete chart;
    delete series;
    delete axisX;
    delete axisY;
    delete horizontalLine;
}









#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtConcurrent/QtConcurrent>
#include <QThread>
#include <QWidget>

#include "configdata.h"

#define MAX_BATT 100

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    
public slots:
    void turnOff();
    void turnOn();
    void returnHomePage();
    void chargeDevice();
    void unplugCharger();

private slots:

    void on_dateTimeEditor_dateTimeChanged(const QDateTime &dateTime);

private:
    Ui::MainWindow *ui;
    bool isOn;
    bool isCharging;
    int battery;
    ConfigData *configData;
    bool existPIN;

    void batteryDrain();
    bool checkingPIN();
    void changeDateTime(const QDateTime &datePlusTime2);
};
#endif // MAINWINDOW_H

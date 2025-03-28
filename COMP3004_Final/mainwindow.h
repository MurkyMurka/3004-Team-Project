#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtConcurrent/QtConcurrent>
#include <QThread>
#include <QWidget>
#include <QTextEdit>
#include <QFont>
#include <QString>

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

    void setMainClock();

    void on_dateTimeEditor_dateTimeChanged(const QDateTime &dateTime);

    void on_createProfileBTN_clicked();

    void on_addCarbsBTN_clicked();

    void on_addBgBTN_2_clicked();

    void on_confirmBolusBTN_clicked();

    void on_buttonBox_rejected();

    void on_confirmBolBTN_rejected();

    void on_setDeliverBTN_clicked();

    void on_setTimeDurBTN_clicked();

    void on_setDeliveryTimeBTN_clicked();


private:
    Ui::MainWindow *ui;
    bool isOn;
    bool isCharging;
    int battery;
    ConfigData *configData;
    bool existPIN;
    QTimer *clock;
    int profNum = 0;

    void batteryDrain();
    bool checkingPIN();
    void changeDateTime(const QDateTime &datePlusTime2);
};
#endif // MAINWINDOW_H

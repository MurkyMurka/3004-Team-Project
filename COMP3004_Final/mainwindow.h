#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtConcurrent/QtConcurrent>
#include <QThread>

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
    void chargeDevice();
    void unplugCharger();

private:
    Ui::MainWindow *ui;
    bool isOn;
    bool isCharging;
    int battery;

    void batteryDrain();
};
#endif // MAINWINDOW_H

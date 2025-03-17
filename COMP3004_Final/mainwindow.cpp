#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->OnButton, SIGNAL(clicked()), this, SLOT(turnOn()));
    connect(ui->OffButton, SIGNAL(clicked()), this, SLOT(turnOff()));
    connect(ui->TandemLogo, SIGNAL(clicked()), this, SLOT(turnOn()));
    connect(ui->ChargeButton, &QPushButton::clicked, this, [this]() {
        QtConcurrent::run(this, &MainWindow::chargeDevice);
    });
    connect(ui->UnplugButton, SIGNAL(clicked()), this, SLOT(unplugCharger()));

    isOn = false;
    turnOff();

    isCharging = false;
    battery = 0;
    ui->BatteryBar->setValue(battery);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::turnOff() {
    ui->stackedWidget->setCurrentWidget(ui->OffPage);
    isOn = false;
}

void MainWindow::turnOn() {
    if(!isOn && battery > 0) {
        ui->stackedWidget->setCurrentWidget(ui->HomePage);
        isOn = true;
        QtConcurrent::run(this, &MainWindow::batteryDrain);
    }
}

void MainWindow::chargeDevice() {
    isCharging = true;
    while(isCharging && battery < MAX_BATT) {
        battery++;
        ui->BatteryBar->setValue(battery);
        QThread::msleep(500);
    }
}

void MainWindow::unplugCharger() {
    isCharging = false;
}

void MainWindow::batteryDrain() {
    while(isOn) {
        QThread::sleep(3);
        battery--;
        ui->BatteryBar->setValue(battery);
        if(battery <= 0) {
            turnOff();
        }
    }
}

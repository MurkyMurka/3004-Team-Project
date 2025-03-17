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

    turnOff();

    isOn = false;
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
    if(!isOn) {
        ui->stackedWidget->setCurrentWidget(ui->HomePage);
        isOn = true;
    }
}

#include "mainwindow.h"
#include "ui_mainwindow.h"
//WOO get you some of that!
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->OnButton, SIGNAL(clicked()), this, SLOT(turnOn()));

    connect(ui->OffButton, SIGNAL(clicked()), this, SLOT(turnOff()));

    connect(ui->TandemLogo, SIGNAL(clicked()), this, SLOT(returnHomePage()));

    ui->profileTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    connect(ui->ChargeButton, &QPushButton::clicked, this, [this]() {
        QtConcurrent::run(this, &MainWindow::chargeDevice);
    });

    connect(ui->UnplugButton, SIGNAL(clicked()), this, SLOT(unplugCharger()));

    connect(ui->OptionsButton, &QPushButton::clicked, this, [this]() {
        ui->stackedWidget->setCurrentWidget(ui->OptionsPage);
    });

    connect(ui->SettingsButton, &QPushButton::clicked, this, [this]() {
        ui->stackedWidget->setCurrentWidget(ui->SettingsPage_1);
    });

    connect(ui->DownButton, &QPushButton::clicked, this, [this]() {
        ui->stackedWidget->setCurrentWidget(ui->SettingsPage_2);
    });

    connect(ui->UpButton, &QPushButton::clicked, this, [this]() {
        ui->stackedWidget->setCurrentWidget(ui->SettingsPage_1);
    });

    connect(ui->BolusButton, &QPushButton::clicked, this, [this]() {
        ui->stackedWidget->setCurrentWidget(ui->BolusPage);
    });

    connect(ui->backToHome, &QPushButton::clicked, this, [this]() {
        ui->stackedWidget->setCurrentWidget(ui->HomePage);
    });

    connect(ui->BTN0, &QPushButton::clicked, this, [this]() {
        ui->stackedWidget->setCurrentWidget(ui->BolusPage);
    });

    connect(ui->enterCarbsBTN, &QPushButton::clicked, this, [this]() {
        ui->stackedWidget->setCurrentWidget(ui->enterCarbsPage);
    });

    connect(ui->backToHome_2, &QPushButton::clicked, this, [this]() {
        ui->stackedWidget->setCurrentWidget(ui->HomePage);
    });

    connect(ui->backToHome_3, &QPushButton::clicked, this, [this]() {
        ui->stackedWidget->setCurrentWidget(ui->OptionsPage);
    });

    connect(ui->backToOptionsBTN, &QPushButton::clicked, this, [this]() {
        ui->stackedWidget->setCurrentWidget(ui->OptionsPage);
    });

    connect(ui->myPumpBTN, &QPushButton::clicked, this, [this]() {
        ui->stackedWidget->setCurrentWidget(ui->myPumpPage);
    });

    connect(ui->backToMyPumpBTN, &QPushButton::clicked, this, [this]() {
        ui->stackedWidget->setCurrentWidget(ui->myPumpPage);
    });

    connect(ui->personalProfilesBTN, &QPushButton::clicked, this, [this]() {
        ui->stackedWidget->setCurrentWidget(ui->personalProfilesPage);
    });

    connect(ui->createProfilePageBTN, &QPushButton::clicked, this, [this]() {
        ui->stackedWidget->setCurrentWidget(ui->profileNameCreatePage);
    });

    connect(ui->createProfileBTN, &QPushButton::clicked, this, [this]() {
        ui->stackedWidget->setCurrentWidget(ui->personalProfilesPage);
    });

    connect(ui->addCarbsBTN, &QPushButton::clicked, this, [this]() {
        ui->stackedWidget->setCurrentWidget(ui->BolusPage);
    });

    connect(ui->backToBolusBTN, &QPushButton::clicked, this, [this]() {
        ui->stackedWidget->setCurrentWidget(ui->BolusPage);
    });

    connect(ui->addBgBTN_2, &QPushButton::clicked, this, [this]() {
        ui->stackedWidget->setCurrentWidget(ui->BolusPage);
    });

    connect(ui->addBgBTN, &QPushButton::clicked, this, [this]() {
        ui->stackedWidget->setCurrentWidget(ui->enterBgPage);
    });

    connect(ui->confirmBolusBTN, &QPushButton::clicked, this, [this]() {
        ui->stackedWidget->setCurrentWidget(ui->confirmBolusPage);
    });

    connect(ui->backToDeliverBTN, &QPushButton::clicked, this, [this]() {
        ui->stackedWidget->setCurrentWidget(ui->deliverBolusPage);
    });




    clock = new QTimer(this);
    connect(clock, &QTimer::timeout, this, &MainWindow::setMainClock);
    clock->start(1000);

    configData = new ConfigData(ui->stackedWidget->findChild<QWidget*>("SettingsPage_1"), ui->stackedWidget->findChild<QWidget*>("SettingsPage_2"));

    isOn = false;
    turnOff();

    isCharging = false;
    battery = 0;
    ui->BatteryBar->setValue(battery);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete configData;
}

void MainWindow::turnOff() {
    ui->stackedWidget->setCurrentWidget(ui->OffPage);
    isOn = false;
    existPIN = configData->isPINSet();
    if(existPIN) {
        ui->PINFrame->show();
        ui->PIN->setText("");
        ui->ErrorPIN->setText("");
    }else {
        ui->PINFrame->hide();
    }
}

void MainWindow::turnOn() {
    if(!isOn && battery > 0) {
        if(existPIN) {
            if(checkingPIN()) {
                ui->stackedWidget->setCurrentWidget(ui->HomePage);
                isOn = true;
            }else {
                ui->ErrorPIN->setText("Incorrect PIN");
                ui->ErrorPIN->setStyleSheet("color: red;");
            }
        }else {
            ui->stackedWidget->setCurrentWidget(ui->HomePage);
            isOn = true;
        }
    }
    QtConcurrent::run(this, &MainWindow::batteryDrain);
}

bool MainWindow::checkingPIN() {
    QString pin = ui->PIN->toPlainText();
    if (pin.contains(QRegularExpression("\\D"))) {
        return false;
    } else {
        if(pin.toInt() == configData->getCurPIN()) {
            return true;
        }
    }
    return false;
}

void MainWindow::returnHomePage() {
    if(isOn) {
        ui->stackedWidget->setCurrentWidget(ui->HomePage);
    }
}

void MainWindow::chargeDevice() {
    isCharging = true;
    while(isCharging && battery < MAX_BATT) {
        battery++;
        
        QMetaObject::invokeMethod(this, [this]() {
            ui->BatteryBar->setValue(battery);
        }, Qt::QueuedConnection);

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
        if(battery < 10){
            ui->stackedWidget->setCurrentWidget(ui->lowChargeWarningPage);
        }
        QMetaObject::invokeMethod(this, [this]() {
            ui->BatteryBar->setValue(battery);
            if (battery <= 0) {
                turnOff();
            }
        }, Qt::QueuedConnection);
    }
}


void MainWindow::setMainClock(){
    QDateTime dateTime = configData->getCurDateTime();
    dateTime = dateTime.addSecs(1);
    configData->setCurDateTime(dateTime);
    ui->dateTimeEdit->setDateTime(dateTime);
    ui->dateTimeEditor->setDateTime(dateTime);
}


void MainWindow::on_dateTimeEditor_dateTimeChanged(const QDateTime &dateTime){
    configData->setCurDateTime(dateTime);
    ui->dateTimeEdit->setDateTime(dateTime);
}


void MainWindow::on_createProfileBTN_clicked(){

}


void MainWindow::on_addCarbsBTN_clicked(){
    QString carbs = QString::number(ui->carbGramsSpinBox->value());
    ui->enterCarbsBTN->setText(carbs);
}


void MainWindow::on_addBgBTN_2_clicked(){
    QString carbs = QString::number(ui->bgSpinBox->value());
    ui->addBgBTN->setText(carbs);
}


void MainWindow::on_confirmBolusBTN_clicked(){
    QString carbs = QString::number(ui->carbGramsSpinBox->value());
    QString bg = QString::number(ui->bgSpinBox->value());
    ui->conCarb->setText(carbs);
    ui->conBG->setText(bg);
    ui->conUnits->setText(ui->finalBolusUnits->toPlainText());
}


void MainWindow::on_buttonBox_rejected(){
    ui->stackedWidget->setCurrentWidget(ui->BolusPage);
}

void MainWindow::on_buttonBox_accepted(){
    ui->stackedWidget->setCurrentWidget(ui->deliverBolusPage);
}


void MainWindow::on_confirmBolBTN_rejected(){
    ui->stackedWidget->setCurrentWidget(ui->BolusPage);
}


void MainWindow::on_confirmBolBTN_accepted(){
    if()

    ui->stackedWidget->setCurrentWidget(ui->HomePage);
    ui->carbGramsSpinBox->setValue(0);
    ui->bgSpinBox->setValue(0);
    ui->enterCarbsBTN->setText("0");
    ui->addBgBTN->setText("Add BG");
}




void MainWindow::on_radioButton_clicked(){

}


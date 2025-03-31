#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    insulinPump = new InsulinPump(ui->TubingUnit, ui->StartStopTubingBTN);

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

    connect(ui->backToPersonalProfilesPageBTN, &QPushButton::clicked, this, [this]() {
        ui->stackedWidget->setCurrentWidget(ui->personalProfilesPage);
    });

    connect(ui->backToExtendedPageBTN, &QPushButton::clicked, this, [this]() {
        ui->stackedWidget->setCurrentWidget(ui->extendedPage);
    });

    connect(ui->editExtensionBTN, &QPushButton::clicked, this, [this]() {
        ui->stackedWidget->setCurrentWidget(ui->extendedPage);
    });

    connect(ui->backToDeliverBTN, &QPushButton::clicked, this, [this]() {
        ui->stackedWidget->setCurrentWidget(ui->deliverBolusPage);
    });

    connect(ui->deliverNowBTN, &QPushButton::clicked, this, [this]() {
        ui->stackedWidget->setCurrentWidget(ui->deliverNowPercentagePage);
    });

    connect(ui->setDeliveryTimeBTN, &QPushButton::clicked, this, [this]() {
        ui->stackedWidget->setCurrentWidget(ui->deliverConfirmPage);
    });

    connect(ui->backToExtendedPageBTN_2, &QPushButton::clicked, this, [this]() {
        ui->stackedWidget->setCurrentWidget(ui->extendedPage);
    });

    connect(ui->extendedDurationBTN, &QPushButton::clicked, this, [this]() {
        ui->stackedWidget->setCurrentWidget(ui->timeDurationPage);
    });

    connect(ui->durationButtonBox, &QDialogButtonBox::rejected, this, [=]() {
        ui->stackedWidget->setCurrentWidget(ui->extendedPage);
    });

    connect(ui->backToOptionsBTN_2, &QPushButton::clicked, this, [this]() {
        ui->stackedWidget->setCurrentWidget(ui->OptionsPage);
    });

    connect(ui->loadInsulinCartBTN, &QPushButton::clicked, this, [this]() {
        ui->stackedWidget->setCurrentWidget(ui->loadPage);
    });

    connect(ui->cartStopConfirmBTN, &QDialogButtonBox::rejected, this, [=]() {
        ui->stackedWidget->setCurrentWidget(ui->loadPage);
    });

    connect(ui->cartStopConfirmBTN_2, &QDialogButtonBox::rejected, this, [=]() {
        ui->stackedWidget->setCurrentWidget(ui->loadPage);
    });

    connect(ui->changeCartBTN, &QPushButton::clicked, this, [this]() {
        ui->stackedWidget->setCurrentWidget(ui->stopDeliverPage);
    });

    connect(ui->cartStopConfirmBTN, &QDialogButtonBox::accepted, this, [=]() {
        ui->stackedWidget->setCurrentWidget(ui->disconnectPage);
    });

    connect(ui->cartStopConfirmBTN_2, &QDialogButtonBox::accepted, this, [=]() {
        ui->stackedWidget->setCurrentWidget(ui->insulinCartSizePage);
    });

    connect(ui->continueCartBTN, &QPushButton::clicked, this, [this]() {
        insulinPump->refillCartridge(static_cast<float>(ui->insulinCartAmountSpinBox->value()));
        ui->stackedWidget->setCurrentWidget(ui->fillTubingPage);
    });

    connect(ui->fillTubingBTN_2, &QPushButton::clicked, this, [this]() {
        ui->stackedWidget->setCurrentWidget(ui->setupForCannula);
    });

    connect(ui->StartStopTubingBTN, &QPushButton::clicked, insulinPump, &InsulinPump::startStopRefillTubing);

    connect(ui->goToCannulaFillingBTN, &QPushButton::clicked, this, [this]() {
        ui->stackedWidget->setCurrentWidget(ui->fillCannulaPage);
    });

    connect(ui->fillCannulaBTN, &QPushButton::clicked, this, [this]() {
        ui->stackedWidget->setCurrentWidget(ui->resumeInsulinPage);
    });

    connect(ui->loadResumeBTN, &QDialogButtonBox::accepted, this, [=]() {
        ui->stackedWidget->setCurrentWidget(ui->HomePage);
        ui->startStopBTN->setText("STOP INSULIN");

    });

    connect(ui->loadResumeBTN, &QDialogButtonBox::rejected, this, [=]() {
        ui->stackedWidget->setCurrentWidget(ui->HomePage);
        ui->startStopBTN->setText("START INSULIN");

    });

    connect(ui->loadResumeBTN, &QDialogButtonBox::rejected, this, [=]() {
        ui->stackedWidget->setCurrentWidget(ui->HomePage);

    });

    connect(ui->startStopBTN, &QPushButton::clicked, this, [this]() {
        QString text = "START INSULIN";

        if(ui->startStopBTN->text() == text){
            ui->startStopBTN->setText("STOP INSULIN");
        }else{
           ui->startStopBTN->setText("START INSULIN");
        }
    });




    connect(ui->durationButtonBox, &QDialogButtonBox::accepted, this, [=]() {
        ui->stackedWidget->setCurrentWidget(ui->deliverBolusPage);
        //stores the minutes and hours as strings
        QString hours = QString::number(ui->setHourSpinbox->value());
        QString minutes = QString::number(ui->setMinSpinbox->value());

        //deciding what to set the text of the button if there are no hours or no minutes
        if(ui->setHourSpinbox->value() == 0){
            ui->finalTimeDurationLabel->setText(minutes + " minute(s)");
        }else if(ui->setMinSpinbox->value() == 0){
            ui->finalTimeDurationLabel->setText(hours + " hour(s)");
        }else{
            ui->finalTimeDurationLabel->setText(hours + " hour(s) " + minutes + " minute(s)");
        }
        ui->ExtensionCheckBox->setChecked(true);
    });

    connect(ui->finalConfirmBolusButtonBox, &QDialogButtonBox::accepted, this, [=]() {
        ui->stackedWidget->setCurrentWidget(ui->intiatedPage);
    });

    connect(ui->confirmBolBTN, &QDialogButtonBox::accepted, this, [=]() {
        ui->stackedWidget->setCurrentWidget(ui->finalBolusConfirmPage);
        ui->carbGramsSpinBox->setValue(0);
        ui->bgSpinBox->setValue(0);
        ui->enterCarbsBTN->setText("0");
        ui->addBgBTN->setText("Add BG");
    });


    connect(ui->buttonBox, &QDialogButtonBox::accepted, this, [=]() {
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
    delete insulinPump;
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
        if(battery < 10 && !isCharging){
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
    if(profNum == 6){
        ui->nameErrorLabel->setText("Max Profiles Made");\
        return;
    }
    if(ui->profileNameLineEdit->text().isEmpty()){
        ui->nameErrorLabel->setText("Please enter characters!!");
        return;
    }else{
        ui->profileTable->insertRow(profNum);
        for(int i = 0; i < 3; i++){
            if(i == 0){
                QString nameText = ui->profileNameLineEdit->text();
                QTableWidgetItem *name = new QTableWidgetItem(nameText);
                ui->profileTable->setItem(profNum, i, name);
            }
            if(i == 1){
                QPushButton *button1 = new QPushButton(ui->profileTable);
                button1->setText("Select");
                ui->profileTable->setCellWidget(profNum, i, button1);
            }
            if(i == 2){
                QPushButton *button2 = new QPushButton(ui->profileTable);
                button2->setText("Edit");
                ui->profileTable->setCellWidget(profNum, i, button2);
            }
        }
    }
    profNum++;
    ui->stackedWidget->setCurrentWidget(ui->personalProfilesPage);
    ui->nameErrorLabel->setText("");
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
    //stores the carbs and bg as strings
    QString carbs = QString::number(ui->carbGramsSpinBox->value());
    QString bg = QString::number(ui->bgSpinBox->value());
    //this then sets the texts to those prev numbers to strings
    ui->conCarb->setText(carbs);
    ui->conBG->setText(bg);
    ui->conUnits->setText(ui->finalBolusUnits->toPlainText());

}


void MainWindow::on_buttonBox_rejected(){
    ui->stackedWidget->setCurrentWidget(ui->BolusPage);
}



void MainWindow::on_confirmBolBTN_rejected(){
    ui->stackedWidget->setCurrentWidget(ui->BolusPage);
}



void MainWindow::on_setDeliverBTN_clicked(){
    //stores the deliver now and deliver later ammounts
    QString deliverNow = QString::number(ui->deliverNowSpinbox->value());
    int deliverLaterInt = 100 - ui->deliverNowSpinbox->value();
    QString deliverLaterText = QString::number(deliverLaterInt);

    //this sets the display of deliver now
    ui->deliverNowBTN->setText(deliverNow + "%");

    //this sets the display of deliver later and font stuff to make it look good
    ui->deliverLaterLabel->setText(deliverLaterText + "%");
    ui->deliverLaterLabel->setAlignment(Qt::AlignCenter);
    QFont fontSize = ui->deliverLaterLabel->font();
    fontSize.setPointSize(18);
    ui->deliverLaterLabel->setFont(fontSize);

    //updates the display back origin before this button was clicked
    ui->stackedWidget->setCurrentWidget(ui->extendedPage);
}


void MainWindow::on_setTimeDurBTN_clicked(){
    //stores the minutes and hours as strings
    QString hours = QString::number(ui->setHourSpinbox->value());
    QString minutes = QString::number(ui->setMinSpinbox->value());

    //deciding what to set the text of the button if there are no hours or no minutes
    if(ui->setHourSpinbox->value() == 0){
        ui->extendedDurationBTN->setText(minutes + " minute(s)");
    }else if(ui->setMinSpinbox->value() == 0){
        ui->extendedDurationBTN->setText(hours + " hour(s)");
    }else{
        ui->extendedDurationBTN->setText(hours + " hour(s) " + minutes + " minute(s)");
    }

    //updates the display back origin before this button was clicked
    ui->stackedWidget->setCurrentWidget(ui->extendedPage);
}


void MainWindow::on_setDeliveryTimeBTN_clicked(){
    //stores the deliver now and deliver later ammounts
    QString deliverNow = QString::number(ui->deliverNowSpinbox->value());
    int deliverLaterInt = 100 - ui->deliverNowSpinbox->value();
    QString deliverLaterText = QString::number(deliverLaterInt);

    //stores the minutes and hours as strings
    QString hours = QString::number(ui->setHourSpinbox->value());
    QString minutes = QString::number(ui->setMinSpinbox->value());

    //deciding what to set the text of the button if there are no hours or no minutes
    if(ui->setHourSpinbox->value() == 0){
        ui->durationLabel->setText(minutes + " minute(s)");
    }else if(ui->setMinSpinbox->value() == 0){
        ui->durationLabel->setText(hours + " hour(s)");
    }else{
        ui->durationLabel->setText(hours + " hour(s) " + minutes + " minute(s)");
    }

    ui->deliverNowLabel->setText(deliverNow + "%");
    ui->deliverLaterLabel_3->setText(deliverLaterText + "%");

}



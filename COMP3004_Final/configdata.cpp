#include "configdata.h"

ConfigData::ConfigData(QWidget *_settingsPage1, QWidget *_settingsPage2) : settingsPage1(_settingsPage1), settingsPage2(_settingsPage2)
{
    curDateTime = QDateTime::currentDateTime();
    curPIN = -1;
    bluetoothActive = false;

    QPushButton *deletePINButton = settingsPage1->findChild<QPushButton*>("DeletePINButton");
    connect(deletePINButton, &QPushButton::clicked, this, &ConfigData::deletePIN);
    
    QPushButton *setPINButton = settingsPage1->findChild<QPushButton*>("SetPINButton");
    connect(setPINButton, &QPushButton::clicked, this, &ConfigData::setPIN);

    QCheckBox *bluetoothCheckBox = settingsPage2->findChild<QCheckBox*>("BluetoothCheckBox");
    connect(bluetoothCheckBox, &QCheckBox::toggled, this, &ConfigData::bluetoothCheck);
}

void ConfigData::setCurDateTime(const QDateTime &datePlusTimeSetting) {
    if(curDateTime != datePlusTimeSetting){
        curDateTime = datePlusTimeSetting;
    }
}

QDateTime ConfigData::getCurDateTime() const{
    return curDateTime;
}

void ConfigData::setPIN() {
    QString newPIN = settingsPage1->findChild<QTextEdit*>("NewPIN")->toPlainText();
    if (newPIN.contains(QRegularExpression("\\D"))) {
        curPIN = -1;
    } else {
        curPIN = newPIN.toInt();
    }

    if(isPINSet()) {
        settingsPage1->findChild<QTextBrowser*>("CurrentPIN")->setText(newPIN);
        settingsPage1->findChild<QTextEdit*>("NewPIN")->setText("");
        settingsPage1->findChild<QLabel*>("ErrorNewPIN")->setText("");
    }else {
        settingsPage1->findChild<QLabel*>("ErrorNewPIN")->setText("Invalid PIN");
        settingsPage1->findChild<QLabel*>("ErrorNewPIN")->setStyleSheet("color: red;");
    }
}

void ConfigData::deletePIN() {
    curPIN = -1;
    settingsPage1->findChild<QTextBrowser*>("CurrentPIN")->setText("");
}

void ConfigData::bluetoothCheck(bool checked) {
    bluetoothActive = checked;
    QLabel *tempLabel = settingsPage2->findChild<QLabel*>("BTMess");
    tempLabel->show();
    if(checked) {
        tempLabel->setText("Bluetooth is active");
    }else {
        tempLabel->setText("Bluetooth is inactive");
    }
    QTimer::singleShot(2000, tempLabel, &QLabel::hide);
}

bool ConfigData::isPINSet() const {
    if(curPIN > 0) {
        return true;
    }
    return false;
}

int ConfigData::getCurPIN() const {
    return curPIN;
}

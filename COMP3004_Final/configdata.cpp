#include "configdata.h"

ConfigData::ConfigData(QWidget *_configPage) : configPage(_configPage)
{
    curDateTime = QDateTime::currentDateTime();
    curPIN = -1;

    QPushButton *deletePINButton = configPage->findChild<QPushButton*>("DeletePINButton");
    connect(deletePINButton, &QPushButton::clicked, this, &ConfigData::deletePIN);
    QPushButton *setPINButton = configPage->findChild<QPushButton*>("SetPINButton");
    connect(setPINButton, &QPushButton::clicked, this, &ConfigData::setPIN);
}

void ConfigData::setCurDateTime(QDate newDate, QTime newTime) {
    curDateTime.setDate(newDate);
    curDateTime.setTime(newTime);
}

void ConfigData::setPIN() {
    QString newPIN = configPage->findChild<QTextEdit*>("NewPIN")->toPlainText();
    if (newPIN.contains(QRegularExpression("\\D"))) {
        curPIN = -1;
    } else {
        curPIN = newPIN.toInt();
    }

    if(isPINSet()) {
        configPage->findChild<QTextBrowser*>("CurrentPIN")->setText(newPIN);
        configPage->findChild<QTextEdit*>("NewPIN")->setText("");
        configPage->findChild<QLabel*>("ErrorNewPIN")->setText("");
    }else {
        configPage->findChild<QLabel*>("ErrorNewPIN")->setText("Invalid PIN");
        configPage->findChild<QLabel*>("ErrorNewPIN")->setStyleSheet("color: red;");
    }
}

void ConfigData::deletePIN() {
    curPIN = -1;
    configPage->findChild<QTextBrowser*>("CurrentPIN")->setText("");
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

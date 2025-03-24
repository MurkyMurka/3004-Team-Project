#ifndef CONFIGDATA_H
#define CONFIGDATA_H

#include <QObject>
#include <QDateTimeEdit>
#include <QWidget>
#include <QPushButton>
#include <QTextBrowser>
#include <QTextEdit>
#include <QLabel>
#include <QCheckBox>
#include <QRegularExpression>
#include <QString>
#include <QTimer>

class ConfigData : public QObject
{
    Q_OBJECT

public:
    ConfigData(QWidget *_settingsPage1, QWidget *_settingsPage2);
    ~ConfigData() { /* empty */ }
    bool isPINSet() const;
    int getCurPIN() const;
    QDateTime getCurDateTime() const;

public slots:
    void setCurDateTime(const QDateTime &datePlusTimeSetting);
    void setPIN();
    void deletePIN();
    void bluetoothCheck(bool checked);

private:
    QWidget *settingsPage1;
    QWidget *settingsPage2;
    QDateTime curDateTime;
    int curPIN;
    bool bluetoothActive;
};

#endif // CONFIGDATA_H

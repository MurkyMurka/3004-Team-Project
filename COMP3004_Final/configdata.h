#ifndef CONFIGDATA_H
#define CONFIGDATA_H

#include <QObject>
#include <QDateTime>
#include <QWidget>
#include <QPushButton>
#include <QTextBrowser>
#include <QTextEdit>
#include <QLabel>
#include <QRegularExpression>
#include <QString>

class ConfigData : public QObject
{
    Q_OBJECT

public:
    ConfigData(QWidget *_configPage);
    ~ConfigData() { /* empty */ }
    bool isPINSet() const;
    int getCurPIN() const;

public slots:
    void setCurDateTime(QDate date, QTime time);
    void setPIN();
    void deletePIN();

private:
    QWidget *configPage;
    QDateTime curDateTime;
    int curPIN;
};

#endif // CONFIGDATA_H

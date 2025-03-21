/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *HomePage;
    QLabel *BolusIcon;
    QProgressBar *BolusBar;
    QLabel *BolusNum;
    QPushButton *OptionsButton;
    QPushButton *BolusButton;
    QGraphicsView *graphicsView;
    QWidget *OffPage;
    QTextBrowser *textBrowser;
    QFrame *PINFrame;
    QLabel *label_3;
    QTextEdit *PIN;
    QLabel *ErrorPIN;
    QWidget *OptionsPage;
    QPushButton *SettingsButton;
    QWidget *SettingsPage_1;
    QGraphicsView *DTView;
    QGraphicsView *PINView;
    QLabel *DTLabel;
    QLabel *PINLabel;
    QLabel *label;
    QTextBrowser *CurrentPIN;
    QPushButton *DeletePINButton;
    QTextEdit *NewPIN;
    QPushButton *SetPINButton;
    QLabel *label_2;
    QLabel *ErrorNewPIN;
    QPushButton *DownButton;
    QWidget *SettingsPage_2;
    QGraphicsView *BluetoothView;
    QPushButton *UpButton;
    QLabel *label_5;
    QCheckBox *BluetoothCheckBox;
    QLabel *BTMess;
    QPushButton *OnButton;
    QPushButton *OffButton;
    QPushButton *ChargeButton;
    QPushButton *UnplugButton;
    QProgressBar *BatteryBar;
    QPushButton *TandemLogo;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 50, 571, 521));
        HomePage = new QWidget();
        HomePage->setObjectName(QString::fromUtf8("HomePage"));
        BolusIcon = new QLabel(HomePage);
        BolusIcon->setObjectName(QString::fromUtf8("BolusIcon"));
        BolusIcon->setGeometry(QRect(10, 20, 16, 17));
        BolusBar = new QProgressBar(HomePage);
        BolusBar->setObjectName(QString::fromUtf8("BolusBar"));
        BolusBar->setGeometry(QRect(30, 10, 141, 31));
        BolusBar->setValue(24);
        BolusNum = new QLabel(HomePage);
        BolusNum->setObjectName(QString::fromUtf8("BolusNum"));
        BolusNum->setGeometry(QRect(70, 50, 71, 21));
        OptionsButton = new QPushButton(HomePage);
        OptionsButton->setObjectName(QString::fromUtf8("OptionsButton"));
        OptionsButton->setGeometry(QRect(10, 390, 271, 101));
        BolusButton = new QPushButton(HomePage);
        BolusButton->setObjectName(QString::fromUtf8("BolusButton"));
        BolusButton->setGeometry(QRect(300, 390, 271, 101));
        graphicsView = new QGraphicsView(HomePage);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(10, 80, 431, 291));
        stackedWidget->addWidget(HomePage);
        OffPage = new QWidget();
        OffPage->setObjectName(QString::fromUtf8("OffPage"));
        textBrowser = new QTextBrowser(OffPage);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(10, 10, 561, 481));
        PINFrame = new QFrame(OffPage);
        PINFrame->setObjectName(QString::fromUtf8("PINFrame"));
        PINFrame->setGeometry(QRect(200, 220, 181, 91));
        PINFrame->setFrameShape(QFrame::StyledPanel);
        PINFrame->setFrameShadow(QFrame::Raised);
        label_3 = new QLabel(PINFrame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 30, 31, 17));
        PIN = new QTextEdit(PINFrame);
        PIN->setObjectName(QString::fromUtf8("PIN"));
        PIN->setGeometry(QRect(60, 30, 101, 21));
        ErrorPIN = new QLabel(PINFrame);
        ErrorPIN->setObjectName(QString::fromUtf8("ErrorPIN"));
        ErrorPIN->setGeometry(QRect(21, 60, 141, 20));
        stackedWidget->addWidget(OffPage);
        OptionsPage = new QWidget();
        OptionsPage->setObjectName(QString::fromUtf8("OptionsPage"));
        SettingsButton = new QPushButton(OptionsPage);
        SettingsButton->setObjectName(QString::fromUtf8("SettingsButton"));
        SettingsButton->setGeometry(QRect(10, 10, 251, 101));
        stackedWidget->addWidget(OptionsPage);
        SettingsPage_1 = new QWidget();
        SettingsPage_1->setObjectName(QString::fromUtf8("SettingsPage_1"));
        DTView = new QGraphicsView(SettingsPage_1);
        DTView->setObjectName(QString::fromUtf8("DTView"));
        DTView->setGeometry(QRect(10, 10, 481, 231));
        PINView = new QGraphicsView(SettingsPage_1);
        PINView->setObjectName(QString::fromUtf8("PINView"));
        PINView->setGeometry(QRect(10, 260, 481, 231));
        DTLabel = new QLabel(SettingsPage_1);
        DTLabel->setObjectName(QString::fromUtf8("DTLabel"));
        DTLabel->setGeometry(QRect(20, 20, 81, 17));
        PINLabel = new QLabel(SettingsPage_1);
        PINLabel->setObjectName(QString::fromUtf8("PINLabel"));
        PINLabel->setGeometry(QRect(20, 270, 241, 17));
        label = new QLabel(SettingsPage_1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 310, 91, 17));
        CurrentPIN = new QTextBrowser(SettingsPage_1);
        CurrentPIN->setObjectName(QString::fromUtf8("CurrentPIN"));
        CurrentPIN->setGeometry(QRect(190, 310, 141, 21));
        DeletePINButton = new QPushButton(SettingsPage_1);
        DeletePINButton->setObjectName(QString::fromUtf8("DeletePINButton"));
        DeletePINButton->setGeometry(QRect(350, 310, 83, 25));
        NewPIN = new QTextEdit(SettingsPage_1);
        NewPIN->setObjectName(QString::fromUtf8("NewPIN"));
        NewPIN->setGeometry(QRect(190, 370, 141, 21));
        SetPINButton = new QPushButton(SettingsPage_1);
        SetPINButton->setObjectName(QString::fromUtf8("SetPINButton"));
        SetPINButton->setGeometry(QRect(220, 410, 83, 25));
        label_2 = new QLabel(SettingsPage_1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(120, 370, 71, 17));
        ErrorNewPIN = new QLabel(SettingsPage_1);
        ErrorNewPIN->setObjectName(QString::fromUtf8("ErrorNewPIN"));
        ErrorNewPIN->setGeometry(QRect(350, 370, 81, 17));
        DownButton = new QPushButton(SettingsPage_1);
        DownButton->setObjectName(QString::fromUtf8("DownButton"));
        DownButton->setGeometry(QRect(510, 460, 41, 31));
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("DownArrow");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        DownButton->setIcon(icon);
        stackedWidget->addWidget(SettingsPage_1);
        SettingsPage_2 = new QWidget();
        SettingsPage_2->setObjectName(QString::fromUtf8("SettingsPage_2"));
        BluetoothView = new QGraphicsView(SettingsPage_2);
        BluetoothView->setObjectName(QString::fromUtf8("BluetoothView"));
        BluetoothView->setGeometry(QRect(10, 10, 481, 231));
        UpButton = new QPushButton(SettingsPage_2);
        UpButton->setObjectName(QString::fromUtf8("UpButton"));
        UpButton->setGeometry(QRect(510, 10, 41, 31));
        UpButton->setIcon(icon);
        label_5 = new QLabel(SettingsPage_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 20, 71, 17));
        BluetoothCheckBox = new QCheckBox(SettingsPage_2);
        BluetoothCheckBox->setObjectName(QString::fromUtf8("BluetoothCheckBox"));
        BluetoothCheckBox->setGeometry(QRect(30, 60, 91, 23));
        BluetoothCheckBox->setLayoutDirection(Qt::RightToLeft);
        BTMess = new QLabel(SettingsPage_2);
        BTMess->setObjectName(QString::fromUtf8("BTMess"));
        BTMess->setGeometry(QRect(140, 150, 211, 17));
        stackedWidget->addWidget(SettingsPage_2);
        OnButton = new QPushButton(centralwidget);
        OnButton->setObjectName(QString::fromUtf8("OnButton"));
        OnButton->setGeometry(QRect(710, 110, 83, 25));
        OffButton = new QPushButton(centralwidget);
        OffButton->setObjectName(QString::fromUtf8("OffButton"));
        OffButton->setGeometry(QRect(710, 160, 83, 25));
        ChargeButton = new QPushButton(centralwidget);
        ChargeButton->setObjectName(QString::fromUtf8("ChargeButton"));
        ChargeButton->setGeometry(QRect(710, 390, 83, 25));
        UnplugButton = new QPushButton(centralwidget);
        UnplugButton->setObjectName(QString::fromUtf8("UnplugButton"));
        UnplugButton->setGeometry(QRect(710, 430, 83, 25));
        BatteryBar = new QProgressBar(centralwidget);
        BatteryBar->setObjectName(QString::fromUtf8("BatteryBar"));
        BatteryBar->setGeometry(QRect(10, 10, 151, 31));
        BatteryBar->setValue(24);
        TandemLogo = new QPushButton(centralwidget);
        TandemLogo->setObjectName(QString::fromUtf8("TandemLogo"));
        TandemLogo->setGeometry(QRect(590, 60, 111, 481));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        BolusIcon->setText(QCoreApplication::translate("MainWindow", "B", nullptr));
        BolusNum->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        OptionsButton->setText(QCoreApplication::translate("MainWindow", "OPTIONS", nullptr));
        BolusButton->setText(QCoreApplication::translate("MainWindow", "BOLUS", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px"
                        ";\"><br /></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">OFF</p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "PIN:", nullptr));
        ErrorPIN->setText(QString());
        SettingsButton->setText(QCoreApplication::translate("MainWindow", "Settings", nullptr));
        DTLabel->setText(QCoreApplication::translate("MainWindow", "Date / Time", nullptr));
        PINLabel->setText(QCoreApplication::translate("MainWindow", "PIN (Personal Identification Number)", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Current PIN:", nullptr));
        DeletePINButton->setText(QCoreApplication::translate("MainWindow", "Delete PIN", nullptr));
        SetPINButton->setText(QCoreApplication::translate("MainWindow", "Set PIN", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "New PIN:", nullptr));
        ErrorNewPIN->setText(QString());
        DownButton->setText(QCoreApplication::translate("MainWindow", "\\/", nullptr));
        UpButton->setText(QCoreApplication::translate("MainWindow", "/\\", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Bluetooth", nullptr));
        BluetoothCheckBox->setText(QCoreApplication::translate("MainWindow", "Bluetooth", nullptr));
        BTMess->setText(QString());
        OnButton->setText(QCoreApplication::translate("MainWindow", "ON", nullptr));
        OffButton->setText(QCoreApplication::translate("MainWindow", "OFF", nullptr));
        ChargeButton->setText(QCoreApplication::translate("MainWindow", "Charge", nullptr));
        UnplugButton->setText(QCoreApplication::translate("MainWindow", "Unplug", nullptr));
        TandemLogo->setText(QCoreApplication::translate("MainWindow", "Tandem", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

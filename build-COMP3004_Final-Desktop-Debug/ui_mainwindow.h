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
#include <QtWidgets/QDateTimeEdit>
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
    QPushButton *OptionsButton;
    QPushButton *BolusButton;
    QProgressBar *BatteryBar;
    QDateTimeEdit *dateTimeEdit;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QTextEdit *inuslinUnits;
    QTextEdit *textEdit_4;
    QTextEdit *timeRemaining;
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
    QDateTimeEdit *dateTimeEditor;
    QWidget *SettingsPage_2;
    QGraphicsView *BluetoothView;
    QPushButton *UpButton;
    QLabel *label_5;
    QCheckBox *BluetoothCheckBox;
    QLabel *BTMess;
    QWidget *timePage;
    QWidget *timeEditPage;
    QWidget *BolusPage;
    QPushButton *backToHome;
    QTextEdit *textEdit_6;
    QLabel *label_4;
    QPushButton *pushButton;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *viewCalcBTN;
    QPushButton *enterCarbsBTN;
    QPushButton *addBgBTN;
    QLabel *label_8;
    QWidget *enterCarbsPage;
    QTextEdit *textEdit_7;
    QPushButton *BTN0;
    QPushButton *pushButton_5;
    QLabel *label_9;
    QPushButton *BTN1;
    QPushButton *BTN3;
    QPushButton *BTN2;
    QPushButton *BTN6;
    QPushButton *BTN5;
    QPushButton *BTN4;
    QPushButton *BTN9;
    QPushButton *BTN8;
    QPushButton *BTN7;
    QPushButton *backBTN;
    QPushButton *pushButton_16;
    QPushButton *OnButton;
    QPushButton *OffButton;
    QPushButton *ChargeButton;
    QPushButton *UnplugButton;
    QPushButton *TandemLogo;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(803, 545);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 571, 521));
        HomePage = new QWidget();
        HomePage->setObjectName(QString::fromUtf8("HomePage"));
        BolusIcon = new QLabel(HomePage);
        BolusIcon->setObjectName(QString::fromUtf8("BolusIcon"));
        BolusIcon->setGeometry(QRect(410, 20, 20, 30));
        BolusBar = new QProgressBar(HomePage);
        BolusBar->setObjectName(QString::fromUtf8("BolusBar"));
        BolusBar->setGeometry(QRect(420, 20, 141, 31));
        BolusBar->setValue(24);
        OptionsButton = new QPushButton(HomePage);
        OptionsButton->setObjectName(QString::fromUtf8("OptionsButton"));
        OptionsButton->setGeometry(QRect(10, 250, 551, 101));
        BolusButton = new QPushButton(HomePage);
        BolusButton->setObjectName(QString::fromUtf8("BolusButton"));
        BolusButton->setGeometry(QRect(10, 100, 551, 101));
        BatteryBar = new QProgressBar(HomePage);
        BatteryBar->setObjectName(QString::fromUtf8("BatteryBar"));
        BatteryBar->setGeometry(QRect(10, 20, 151, 30));
        BatteryBar->setValue(24);
        dateTimeEdit = new QDateTimeEdit(HomePage);
        dateTimeEdit->setObjectName(QString::fromUtf8("dateTimeEdit"));
        dateTimeEdit->setGeometry(QRect(220, 20, 131, 31));
        dateTimeEdit->setReadOnly(true);
        textEdit = new QTextEdit(HomePage);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(30, 390, 371, 51));
        textEdit->setReadOnly(true);
        textEdit_2 = new QTextEdit(HomePage);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setGeometry(QRect(30, 450, 141, 30));
        textEdit_2->setReadOnly(true);
        inuslinUnits = new QTextEdit(HomePage);
        inuslinUnits->setObjectName(QString::fromUtf8("inuslinUnits"));
        inuslinUnits->setGeometry(QRect(180, 450, 41, 30));
        textEdit_4 = new QTextEdit(HomePage);
        textEdit_4->setObjectName(QString::fromUtf8("textEdit_4"));
        textEdit_4->setGeometry(QRect(240, 450, 181, 30));
        textEdit_4->setReadOnly(true);
        timeRemaining = new QTextEdit(HomePage);
        timeRemaining->setObjectName(QString::fromUtf8("timeRemaining"));
        timeRemaining->setGeometry(QRect(440, 450, 121, 30));
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
        dateTimeEditor = new QDateTimeEdit(SettingsPage_1);
        dateTimeEditor->setObjectName(QString::fromUtf8("dateTimeEditor"));
        dateTimeEditor->setGeometry(QRect(150, 90, 221, 81));
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
        timePage = new QWidget();
        timePage->setObjectName(QString::fromUtf8("timePage"));
        stackedWidget->addWidget(timePage);
        timeEditPage = new QWidget();
        timeEditPage->setObjectName(QString::fromUtf8("timeEditPage"));
        stackedWidget->addWidget(timeEditPage);
        BolusPage = new QWidget();
        BolusPage->setObjectName(QString::fromUtf8("BolusPage"));
        backToHome = new QPushButton(BolusPage);
        backToHome->setObjectName(QString::fromUtf8("backToHome"));
        backToHome->setGeometry(QRect(10, 10, 81, 41));
        textEdit_6 = new QTextEdit(BolusPage);
        textEdit_6->setObjectName(QString::fromUtf8("textEdit_6"));
        textEdit_6->setGeometry(QRect(120, 10, 331, 41));
        label_4 = new QLabel(BolusPage);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(270, 60, 41, 17));
        pushButton = new QPushButton(BolusPage);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(480, 10, 81, 41));
        label_6 = new QLabel(BolusPage);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 140, 91, 31));
        label_7 = new QLabel(BolusPage);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(300, 140, 91, 31));
        viewCalcBTN = new QPushButton(BolusPage);
        viewCalcBTN->setObjectName(QString::fromUtf8("viewCalcBTN"));
        viewCalcBTN->setGeometry(QRect(10, 370, 551, 71));
        enterCarbsBTN = new QPushButton(BolusPage);
        enterCarbsBTN->setObjectName(QString::fromUtf8("enterCarbsBTN"));
        enterCarbsBTN->setGeometry(QRect(10, 170, 271, 141));
        addBgBTN = new QPushButton(BolusPage);
        addBgBTN->setObjectName(QString::fromUtf8("addBgBTN"));
        addBgBTN->setGeometry(QRect(290, 170, 271, 141));
        label_8 = new QLabel(BolusPage);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(130, 250, 51, 21));
        stackedWidget->addWidget(BolusPage);
        enterCarbsPage = new QWidget();
        enterCarbsPage->setObjectName(QString::fromUtf8("enterCarbsPage"));
        textEdit_7 = new QTextEdit(enterCarbsPage);
        textEdit_7->setObjectName(QString::fromUtf8("textEdit_7"));
        textEdit_7->setGeometry(QRect(120, 10, 331, 41));
        textEdit_7->setReadOnly(true);
        BTN0 = new QPushButton(enterCarbsPage);
        BTN0->setObjectName(QString::fromUtf8("BTN0"));
        BTN0->setGeometry(QRect(10, 10, 81, 41));
        pushButton_5 = new QPushButton(enterCarbsPage);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(480, 10, 81, 41));
        label_9 = new QLabel(enterCarbsPage);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(270, 60, 41, 17));
        BTN1 = new QPushButton(enterCarbsPage);
        BTN1->setObjectName(QString::fromUtf8("BTN1"));
        BTN1->setGeometry(QRect(10, 120, 181, 71));
        BTN3 = new QPushButton(enterCarbsPage);
        BTN3->setObjectName(QString::fromUtf8("BTN3"));
        BTN3->setGeometry(QRect(390, 120, 181, 71));
        BTN2 = new QPushButton(enterCarbsPage);
        BTN2->setObjectName(QString::fromUtf8("BTN2"));
        BTN2->setGeometry(QRect(200, 120, 181, 71));
        BTN6 = new QPushButton(enterCarbsPage);
        BTN6->setObjectName(QString::fromUtf8("BTN6"));
        BTN6->setGeometry(QRect(390, 200, 181, 71));
        BTN5 = new QPushButton(enterCarbsPage);
        BTN5->setObjectName(QString::fromUtf8("BTN5"));
        BTN5->setGeometry(QRect(200, 200, 181, 71));
        BTN4 = new QPushButton(enterCarbsPage);
        BTN4->setObjectName(QString::fromUtf8("BTN4"));
        BTN4->setGeometry(QRect(10, 200, 181, 71));
        BTN9 = new QPushButton(enterCarbsPage);
        BTN9->setObjectName(QString::fromUtf8("BTN9"));
        BTN9->setGeometry(QRect(390, 280, 181, 71));
        BTN8 = new QPushButton(enterCarbsPage);
        BTN8->setObjectName(QString::fromUtf8("BTN8"));
        BTN8->setGeometry(QRect(200, 280, 181, 71));
        BTN7 = new QPushButton(enterCarbsPage);
        BTN7->setObjectName(QString::fromUtf8("BTN7"));
        BTN7->setGeometry(QRect(10, 280, 181, 71));
        backBTN = new QPushButton(enterCarbsPage);
        backBTN->setObjectName(QString::fromUtf8("backBTN"));
        backBTN->setGeometry(QRect(390, 360, 181, 71));
        pushButton_16 = new QPushButton(enterCarbsPage);
        pushButton_16->setObjectName(QString::fromUtf8("pushButton_16"));
        pushButton_16->setGeometry(QRect(200, 360, 181, 71));
        stackedWidget->addWidget(enterCarbsPage);
        OnButton = new QPushButton(centralwidget);
        OnButton->setObjectName(QString::fromUtf8("OnButton"));
        OnButton->setGeometry(QRect(710, 70, 83, 25));
        OffButton = new QPushButton(centralwidget);
        OffButton->setObjectName(QString::fromUtf8("OffButton"));
        OffButton->setGeometry(QRect(710, 120, 83, 25));
        ChargeButton = new QPushButton(centralwidget);
        ChargeButton->setObjectName(QString::fromUtf8("ChargeButton"));
        ChargeButton->setGeometry(QRect(710, 350, 83, 25));
        UnplugButton = new QPushButton(centralwidget);
        UnplugButton->setObjectName(QString::fromUtf8("UnplugButton"));
        UnplugButton->setGeometry(QRect(710, 390, 83, 25));
        TandemLogo = new QPushButton(centralwidget);
        TandemLogo->setObjectName(QString::fromUtf8("TandemLogo"));
        TandemLogo->setGeometry(QRect(590, 10, 111, 481));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 803, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        BolusIcon->setText(QCoreApplication::translate("MainWindow", "B", nullptr));
#if QT_CONFIG(statustip)
        BolusBar->setStatusTip(QCoreApplication::translate("MainWindow", "%p%", nullptr));
#endif // QT_CONFIG(statustip)
        BolusBar->setFormat(QString());
        OptionsButton->setText(QCoreApplication::translate("MainWindow", "OPTIONS", nullptr));
        BolusButton->setText(QCoreApplication::translate("MainWindow", "BOLUS", nullptr));
        textEdit->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:20pt;\">INSULIN ON BOARD (IOB)</span></p></body></html>", nullptr));
        textEdit_2->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Units</p></body></html>", nullptr));
        inuslinUnits->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        textEdit_4->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Time Remaining</p></body></html>", nullptr));
        timeRemaining->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
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
        backToHome->setText(QCoreApplication::translate("MainWindow", "<--", nullptr));
        textEdit_6->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">0</p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "units", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\342\234\223", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "CARBS", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "GLUCOSE", nullptr));
        viewCalcBTN->setText(QCoreApplication::translate("MainWindow", "View Calculation", nullptr));
        enterCarbsBTN->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        addBgBTN->setText(QCoreApplication::translate("MainWindow", "Add BG", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "grams", nullptr));
        textEdit_7->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Enter Carbs</p></body></html>", nullptr));
        BTN0->setText(QCoreApplication::translate("MainWindow", "<--", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "\342\234\223", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "grams", nullptr));
        BTN1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        BTN3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        BTN2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        BTN6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        BTN5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        BTN4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        BTN9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        BTN8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        BTN7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        backBTN->setText(QCoreApplication::translate("MainWindow", "Back BTN", nullptr));
        pushButton_16->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
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

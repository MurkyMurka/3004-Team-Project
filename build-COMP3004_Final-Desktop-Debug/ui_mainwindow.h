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
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
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
    QPushButton *TandemLogo;
    QWidget *OffPage;
    QTextBrowser *textBrowser;
    QWidget *page;
    QPushButton *OnButton;
    QPushButton *OffButton;
    QPushButton *ChargeButton;
    QPushButton *UnplugButton;
    QProgressBar *BatteryBar;
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
        stackedWidget->setGeometry(QRect(0, 50, 701, 521));
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
        TandemLogo = new QPushButton(HomePage);
        TandemLogo->setObjectName(QString::fromUtf8("TandemLogo"));
        TandemLogo->setGeometry(QRect(580, 20, 111, 471));
        stackedWidget->addWidget(HomePage);
        OffPage = new QWidget();
        OffPage->setObjectName(QString::fromUtf8("OffPage"));
        textBrowser = new QTextBrowser(OffPage);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(10, 20, 651, 551));
        stackedWidget->addWidget(OffPage);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        stackedWidget->addWidget(page);
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
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        BolusIcon->setText(QCoreApplication::translate("MainWindow", "B", nullptr));
        BolusNum->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        OptionsButton->setText(QCoreApplication::translate("MainWindow", "OPTIONS", nullptr));
        BolusButton->setText(QCoreApplication::translate("MainWindow", "BOLUS", nullptr));
        TandemLogo->setText(QCoreApplication::translate("MainWindow", "Tandem", nullptr));
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
        OnButton->setText(QCoreApplication::translate("MainWindow", "ON", nullptr));
        OffButton->setText(QCoreApplication::translate("MainWindow", "OFF", nullptr));
        ChargeButton->setText(QCoreApplication::translate("MainWindow", "Charge", nullptr));
        UnplugButton->setText(QCoreApplication::translate("MainWindow", "Unplug", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

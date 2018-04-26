/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *aboutAction;
    QAction *actionExit;
    QAction *actionEuler_cycle;
    QAction *actionDijkstra_s_algorythm;
    QAction *actionInformation;
    QWidget *centralwidget;
    QGraphicsView *graphicsView;
    QTextEdit *graphInput;
    QPushButton *openButton;
    QPushButton *saveButton;
    QCommandLinkButton *commandLinkButton;
    QPushButton *clearButton;
    QPushButton *prevStepButton;
    QPushButton *nextStepButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QSlider *horizontalSlider;
    QCheckBox *checkBox;
    QPushButton *pushButton;
    QStatusBar *statusbar;
    QMenuBar *menubar;
    QMenu *menu;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(893, 494);
        MainWindow->setMinimumSize(QSize(893, 494));
        MainWindow->setMaximumSize(QSize(893, 510));
        aboutAction = new QAction(MainWindow);
        aboutAction->setObjectName(QStringLiteral("aboutAction"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionEuler_cycle = new QAction(MainWindow);
        actionEuler_cycle->setObjectName(QStringLiteral("actionEuler_cycle"));
        actionDijkstra_s_algorythm = new QAction(MainWindow);
        actionDijkstra_s_algorythm->setObjectName(QStringLiteral("actionDijkstra_s_algorythm"));
        actionInformation = new QAction(MainWindow);
        actionInformation->setObjectName(QStringLiteral("actionInformation"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(20, 20, 591, 391));
        graphInput = new QTextEdit(centralwidget);
        graphInput->setObjectName(QStringLiteral("graphInput"));
        graphInput->setGeometry(QRect(630, 20, 241, 301));
        QFont font;
        font.setFamily(QStringLiteral("Consolas"));
        font.setPointSize(16);
        graphInput->setFont(font);
        openButton = new QPushButton(centralwidget);
        openButton->setObjectName(QStringLiteral("openButton"));
        openButton->setGeometry(QRect(630, 330, 80, 21));
        saveButton = new QPushButton(centralwidget);
        saveButton->setObjectName(QStringLiteral("saveButton"));
        saveButton->setGeometry(QRect(720, 330, 71, 21));
        commandLinkButton = new QCommandLinkButton(centralwidget);
        commandLinkButton->setObjectName(QStringLiteral("commandLinkButton"));
        commandLinkButton->setGeometry(QRect(630, 360, 241, 41));
        clearButton = new QPushButton(centralwidget);
        clearButton->setObjectName(QStringLiteral("clearButton"));
        clearButton->setGeometry(QRect(800, 330, 71, 21));
        prevStepButton = new QPushButton(centralwidget);
        prevStepButton->setObjectName(QStringLiteral("prevStepButton"));
        prevStepButton->setGeometry(QRect(720, 410, 71, 21));
        nextStepButton = new QPushButton(centralwidget);
        nextStepButton->setObjectName(QStringLiteral("nextStepButton"));
        nextStepButton->setGeometry(QRect(630, 410, 80, 21));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(800, 410, 71, 21));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 420, 591, 21));
        label->setFont(font);
        horizontalSlider = new QSlider(centralwidget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(630, 430, 241, 16));
        horizontalSlider->setMinimum(-1000);
        horizontalSlider->setMaximum(-50);
        horizontalSlider->setSliderPosition(-525);
        horizontalSlider->setOrientation(Qt::Horizontal);
        checkBox = new QCheckBox(centralwidget);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(770, 380, 111, 20));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(870, 330, 20, 21));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 893, 20));
        menu = new QMenu(menubar);
        menu->setObjectName(QStringLiteral("menu"));
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menu->menuAction());
        menu->addSeparator();
        menu->addAction(actionInformation);
        menu->addAction(aboutAction);
        menu->addSeparator();
        menu->addAction(actionExit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        aboutAction->setText(QApplication::translate("MainWindow", "About me", Q_NULLPTR));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", Q_NULLPTR));
        actionEuler_cycle->setText(QApplication::translate("MainWindow", "Euler cycle", Q_NULLPTR));
        actionDijkstra_s_algorythm->setText(QApplication::translate("MainWindow", "Dijkstra's algorythm", Q_NULLPTR));
        actionInformation->setText(QApplication::translate("MainWindow", "Information", Q_NULLPTR));
        graphInput->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Consolas'; font-size:16pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:8.25pt;\"><br /></p></body></html>", Q_NULLPTR));
        openButton->setText(QApplication::translate("MainWindow", "OPEN", Q_NULLPTR));
        saveButton->setText(QApplication::translate("MainWindow", "SAVE", Q_NULLPTR));
        commandLinkButton->setText(QApplication::translate("MainWindow", "FIND CYCLE", Q_NULLPTR));
        clearButton->setText(QApplication::translate("MainWindow", "CLEAR", Q_NULLPTR));
        prevStepButton->setText(QApplication::translate("MainWindow", "NEXT STEP", Q_NULLPTR));
        nextStepButton->setText(QApplication::translate("MainWindow", "PREV STEP", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "AUTO", Q_NULLPTR));
        label->setText(QString());
        checkBox->setText(QApplication::translate("MainWindow", "GRAVITATION", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pushButton->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>\320\232\320\275\320\276\320\277\320\272\320\260 \320\264\320\273\321\217 \320\277\320\265\321\200\320\265\321\201\320\276\320\267\320\264\320\260\320\275\320\270\321\217 \320\263\321\200\320\260\321\204\320\260 \320\270\320\267 \320\277\320\276\320\273\321\217 \320\262\320\262\320\276\320\264\320\260 \320\274\320\270\320\275\321\203\321\217 \320\276\321\202\320\272\321\200\321\213\321\202\320\270\320\265 \320\270\320\267 \321\204\320\260\320\271\320\273\320\260</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        pushButton->setWhatsThis(QApplication::translate("MainWindow", "<html><head/><body><p>\320\232\320\275\320\276\320\277\320\272\320\260 \320\264\320\273\321\217 \320\277\320\265\321\200\320\265\321\201\320\276\320\267\320\264\320\260\320\275\320\270\321\217 \320\263\321\200\320\260\321\204\320\260 \320\270\320\267 \320\277\320\276\320\273\321\217 \320\262\320\262\320\276\320\264\320\260 \320\274\320\270\320\275\321\203\321\217 \320\276\321\202\320\272\321\200\321\213\321\202\320\270\320\265 \320\270\320\267 \321\204\320\260\320\271\320\273\320\260</p></body></html>", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        pushButton->setText(QApplication::translate("MainWindow", "*", Q_NULLPTR));
        menu->setTitle(QApplication::translate("MainWindow", "Menu", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

/********************************************************************************
** Form generated from reading UI file 'theorywindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THEORYWINDOW_H
#define UI_THEORYWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TheoryWindow
{
public:
    QLabel *image;
    QLabel *label;
    QTextBrowser *textBrowser;

    void setupUi(QWidget *TheoryWindow)
    {
        if (TheoryWindow->objectName().isEmpty())
            TheoryWindow->setObjectName(QStringLiteral("TheoryWindow"));
        TheoryWindow->resize(644, 444);
        image = new QLabel(TheoryWindow);
        image->setObjectName(QStringLiteral("image"));
        image->setGeometry(QRect(10, 30, 330, 353));
        label = new QLabel(TheoryWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 400, 441, 31));
        QFont font;
        font.setPointSize(8);
        label->setFont(font);
        textBrowser = new QTextBrowser(TheoryWindow);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(360, 10, 281, 431));

        retranslateUi(TheoryWindow);

        QMetaObject::connectSlotsByName(TheoryWindow);
    } // setupUi

    void retranslateUi(QWidget *TheoryWindow)
    {
        TheoryWindow->setWindowTitle(QApplication::translate("TheoryWindow", "Form", Q_NULLPTR));
        image->setText(QString());
        label->setText(QApplication::translate("TheoryWindow", "                                          \320\255\320\271\320\273\320\265\321\200\320\276\320\262 \320\263\321\200\320\260\321\204\n"
"(\321\215\320\271\320\273\320\265\321\200\320\276\320\262 \321\206\320\270\320\272\320\273 \321\217\320\262\320\273\321\217\320\265\321\202\321\201\321\217 \320\276\320\261\320\276\321\205\320\276\320\264\320\276\320\274  \320\262\320\265\321\200\321\210\320\270\320\275 \320\262 \320\260\320\273\321\204\320\260\320\262\320\270\321\202\320\275\320\276\320\274 \320\277\320\276\321\200\321\217\320\264\320\272\320\265)", Q_NULLPTR));
        textBrowser->setHtml(QApplication::translate("TheoryWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:9px; margin-bottom:9px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'sans-serif'; font-size:11pt; font-weight:600; color:#222222;\">\320\255\320\271\320\273\320\265\321\200\320\276\320\262 \321\206\320\270\320\272\320\273</span><span style=\" font-family:'sans-serif'; font-size:11pt; color:#222222;\">\302\240\342\200\224 \321\215\320\271\320\273\320\265\321\200\320\276\320\262 \320\277\321\203\321\202\321\214, \321\217\320\262\320\273\321\217\321\216\321\211\320\270\320\271\321\201\321\217\302\240\321\206\320\270\320\272\320\273\320\276\320\274. \320\242\320\276 \320\265"
                        "\321\201\321\202\321\214 \320\267\320\260\320\274\320\272\320\275\321\203\321\202\321\213\320\271 \320\277\321\203\321\202\321\214, \320\277\321\200\320\276\321\205\320\276\320\264\321\217\321\211\320\270\320\271 \321\207\320\265\321\200\320\265\320\267 \320\272\320\260\320\266\320\264\320\276\320\265 \321\200\320\265\320\261\321\200\320\276 \320\263\321\200\320\260\321\204\320\260 \321\200\320\276\320\262\320\275\320\276 \320\277\320\276 \320\276\320\264\320\275\320\276\320\274\321\203 \321\200\320\260\320\267\321\203.</span></p>\n"
"<p style=\" margin-top:9px; margin-bottom:9px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'sans-serif'; font-size:11pt; color:#222222; background-color:#ffffff;\">\320\241\320\276\320\263\320\273\320\260\321\201\320\275\320\276 \321\202\320\265\320\276\321\200\320\265\320\274\320\265, \320\264\320\276\320\272\320\260\320\267\320\260\320\275\320\275\320\276\320\271\302\240\320\255\320\271\320\273\320"
                        "\265\321\200\320\276\320\274 \321\215\320\271\320\273\320\265\321\200\320\276\320\262 \321\206\320\270\320\272\320\273 \321\201\321\203\321\211\320\265\321\201\321\202\320\262\321\203\320\265\321\202\302\240\321\202\320\276\320\263\320\264\320\260 \320\270 \321\202\320\276\320\273\321\214\320\272\320\276 \321\202\320\276\320\263\320\264\320\260 \320\272\320\276\320\263\320\264\320\260 \320\263\321\200\320\260\321\204\302\240\321\201\320\262\321\217\320\267\320\275\321\213\320\271\302\240\320\270\320\273\320\270 \320\261\321\203\320\264\320\265\321\202 \321\217\320\262\320\273\321\217\321\202\321\214\321\201\321\217 \321\201\320\262\321\217\320\267\320\275\321\213\320\274, \320\265\321\201\320\273\320\270 \321\203\320\264\320\260\320\273\320\270\321\202\321\214 \320\270\320\267 \320\275\320\265\320\263\320\276 \320\262\321\201\320\265 \320\270\320\267\320\276\320\273\320\270\321\200\320\276\320\262\320\260\320\275\320\275\321\213\320\265 \320\262\320\265\321\200\321\210\320\270\320\275\321\213, \320\270 \320\262"
                        " \320\275\321\221\320\274 \320\276\321\202\321\201\321\203\321\202\321\201\321\202\320\262\321\203\321\216\321\202 \320\262\320\265\321\200\321\210\320\270\320\275\321\213 \320\275\320\265\321\207\321\221\321\202\320\275\320\276\320\271\302\240\321\201\321\202\320\265\320\277\320\265\320\275\320\270.</span></p>\n"
"<p style=\" margin-top:9px; margin-bottom:9px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'sans-serif'; font-size:11pt; color:#222222; background-color:#ffffff;\">\320\236\321\200\320\270\320\265\320\275\321\202\320\270\321\200\320\276\320\262\320\260\320\275\320\275\321\213\320\271 \320\263\321\200\320\260\321\204\302\240\321\201\320\276\320\264\320\265\321\200\320\266\320\270\321\202 \321\215\320\271\320\273\320\265\321\200\320\276\320\262 \321\206\320\270\320\272\320\273 \321\202\320\276\320\263\320\264\320\260 \320\270 \321\202\320\276\320\273\321\214\320\272\320\276 \321\202\320\276\320\263\320\264\320\260, \320"
                        "\272\320\276\320\263\320\264\320\260 \320\276\320\275\302\240\321\201\320\270\320\273\321\214\320\275\320\276 \321\201\320\262\321\217\320\267\320\260\320\275\302\240\320\270\320\273\320\270 \321\201\321\200\320\265\320\264\320\270 \320\265\320\263\320\276 \320\272\320\276\320\274\320\277\320\276\320\275\320\265\320\275\321\202 \321\201\320\270\320\273\321\214\320\275\320\276\320\271 \321\201\320\262\321\217\320\267\320\275\320\276\321\201\321\202\320\270 \321\202\320\276\320\273\321\214\320\272\320\276 \320\276\320\264\320\275\320\260 \321\201\320\276\320\264\320\265\321\200\320\266\320\270\321\202 \321\200\320\265\320\261\321\200\320\260 (\320\260 \320\262\321\201\320\265 \320\276\321\201\321\202\320\260\320\273\321\214\320\275\321\213\320\265 \321\217\320\262\320\273\321\217\321\216\321\202\321\201\321\217 \320\270\320\267\320\276\320\273\320\270\321\200\320\276\320\262\320\260\320\275\320\275\321\213\320\274\320\270 \320\262\320\265\321\200\321\210\320\270\320\275\320\260\320\274\320\270) \320\270 \320\264"
                        "\320\273\321\217 \320\272\320\260\320\266\320\264\320\276\320\271 \320\262\320\265\321\200\321\210\320\270\320\275\321\213 \320\263\321\200\320\260\321\204\320\260 \320\265\321\221\302\240\320\262\321\205\320\276\320\264\321\217\321\211\320\260\321\217 \321\201\321\202\320\265\320\277\320\265\320\275\321\214 \321\200\320\260\320\262\320\275\320\260 \320\265\321\221\302\240\320\270\321\201\321\205\320\276\320\264\321\217\321\211\320\265\320\271 \321\201\321\202\320\265\320\277\320\265\320\275\320\270.</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TheoryWindow: public Ui_TheoryWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THEORYWINDOW_H

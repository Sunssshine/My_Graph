/********************************************************************************
** Form generated from reading UI file 'aboutwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTWINDOW_H
#define UI_ABOUTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AboutWindow
{
public:
    QLabel *image;
    QTextBrowser *textBrowser;

    void setupUi(QWidget *AboutWindow)
    {
        if (AboutWindow->objectName().isEmpty())
            AboutWindow->setObjectName(QStringLiteral("AboutWindow"));
        AboutWindow->resize(570, 290);
        AboutWindow->setMinimumSize(QSize(570, 290));
        AboutWindow->setMaximumSize(QSize(570, 290));
        image = new QLabel(AboutWindow);
        image->setObjectName(QStringLiteral("image"));
        image->setGeometry(QRect(0, -10, 301, 301));
        textBrowser = new QTextBrowser(AboutWindow);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(300, -10, 271, 301));
        textBrowser->setMinimumSize(QSize(271, 301));
        textBrowser->setMaximumSize(QSize(271, 16777215));

        retranslateUi(AboutWindow);

        QMetaObject::connectSlotsByName(AboutWindow);
    } // setupUi

    void retranslateUi(QWidget *AboutWindow)
    {
        AboutWindow->setWindowTitle(QApplication::translate("AboutWindow", "Form", Q_NULLPTR));
        image->setText(QString());
        textBrowser->setHtml(QApplication::translate("AboutWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">\320\227\320\264\321\200\320\260\320\262\321\201\321\202\320\262\321\203\320\271\321\202\320\265, \320\262\321\213 \320\267\320\264\320\265\321\201\321\214 \320\277\320\276\321\202\320\276\320\274\321\203-\321\207\321\202\320\276 \320\262\321\213 \320\275\320\260\320\266\320\260\320\273\320\270 \320\275\320\260 \320\272\320\275\320\276\320\277\320\272\321\203. \320"
                        "\224\320\260-\320\264\320\260, \320\275\320\265 \321\203\320\264\320\270\320\262\320\273\321\217\320\271\321\202\320\265\321\201\321\214, \320\275\320\260\320\266\320\260\321\202\320\270\320\265 \320\275\320\260 \321\200\320\260\320\267\320\273\320\270\321\207\320\275\321\213\320\265 \320\272\320\275\320\276\320\277\320\272\320\270 \320\277\321\200\320\270\320\262\320\276\320\264\320\270\321\202 \320\272 \321\201\320\260\320\274\321\213\320\274 \321\200\320\260\320\267\320\273\320\270\321\207\320\275\321\213\320\274 \320\277\320\276\321\201\320\273\320\265\320\264\321\201\321\202\320\262\320\270\321\217\320\274, \320\262 \321\202\320\276\320\274 \321\207\320\270\321\201\320\273\320\265 \320\270 \320\272 \321\202\320\260\320\272\320\270\320\274. \320\222 \320\264\320\260\320\275\320\275\321\213\320\271 \320\274\320\276\320\274\320\265\320\275\321\202 \321\217 \320\275\320\260\321\205\320\276\320\266\321\203\321\201\321\214 \320\262 \321\201\320\276\321\201\321\202\320\276\321\217\320\275\320\270\320\270 \320\260"
                        "\321\204\321\204\320\265\320\272\321\202\320\260 \320\270 \320\277\320\270\321\210\321\203 \321\215\321\202\320\270 \321\201\321\202\321\200\320\276\320\272\320\270 \320\277\321\200\320\260\320\272\321\202\320\270\321\207\320\265\321\201\320\272\320\270 \320\262 \321\201\320\276\321\201\321\202\320\276\321\217\320\275\320\270\320\270 \320\276\321\202\321\207\320\260\321\217\320\275\320\270\321\217, \321\217 \320\277\321\200\320\260\320\272\321\202\320\270\321\207\320\265\321\201\320\272\320\270 \320\277\320\276\320\273\320\275\320\276\321\201\321\202\321\214\321\216 \320\273\320\270\321\210\320\265\320\275 \320\266\320\270\320\267\320\275\320\270. \320\247\321\202\320\276\320\261\321\213 \320\270\320\267\320\261\320\260\320\262\320\270\321\202\321\214\321\201\321\217 \320\276\321\202 (\320\262\320\276\320\267\320\274\320\276\320\266\320\275\320\276) \320\262\320\276\320\267\320\275\320\270\320\272\321\210\320\265\320\263\320\276 \321\207\321\203\320\262\321\201\321\202\320\262\320\260 \320\261\320\265\320\267\321"
                        "\213\321\201\321\205\320\276\320\264\320\275\320\276\321\201\321\202\320\270 \320\270 \320\263\321\200\321\203\321\201\321\202\320\270 \320\277\320\276\321\201\320\274\320\276\321\202\321\200\320\270\321\202\320\265 \320\275\320\260 \320\272\320\260\321\200\321\202\320\270\320\275\320\272\321\203 \321\201\320\273\320\265\320\262\320\260, \320\262\320\276\320\267\320\274\320\276\320\266\320\275\320\276 \320\262\320\260\320\274 \321\201\321\202\320\260\320\275\320\265\321\202 \320\273\320\265\320\263\321\207\320\265, \320\260 \320\262\320\276\320\267\320\274\320\276\320\266\320\275\320\276 \320\270 \320\275\320\265\321\202. \320\232\320\276\320\275\320\265\321\206.</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AboutWindow: public Ui_AboutWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTWINDOW_H

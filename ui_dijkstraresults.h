/********************************************************************************
** Form generated from reading UI file 'dijkstraresults.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIJKSTRARESULTS_H
#define UI_DIJKSTRARESULTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DijkstraResults
{
public:
    QGridLayout *gridLayout;
    QTextBrowser *textBrowser;

    void setupUi(QWidget *DijkstraResults)
    {
        if (DijkstraResults->objectName().isEmpty())
            DijkstraResults->setObjectName(QStringLiteral("DijkstraResults"));
        DijkstraResults->resize(512, 282);
        DijkstraResults->setMinimumSize(QSize(512, 0));
        DijkstraResults->setMaximumSize(QSize(512, 16777215));
        gridLayout = new QGridLayout(DijkstraResults);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        textBrowser = new QTextBrowser(DijkstraResults);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        QFont font;
        font.setFamily(QStringLiteral("Consolas"));
        font.setPointSize(12);
        textBrowser->setFont(font);

        gridLayout->addWidget(textBrowser, 0, 0, 1, 1);


        retranslateUi(DijkstraResults);

        QMetaObject::connectSlotsByName(DijkstraResults);
    } // setupUi

    void retranslateUi(QWidget *DijkstraResults)
    {
        DijkstraResults->setWindowTitle(QApplication::translate("DijkstraResults", "Form", Q_NULLPTR));
        textBrowser->setHtml(QApplication::translate("DijkstraResults", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Consolas'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:8.25pt;\"><br /></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DijkstraResults: public Ui_DijkstraResults {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIJKSTRARESULTS_H

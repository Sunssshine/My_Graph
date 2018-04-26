#include "helpbrowser.h"
#include "edge.h"
HelpBrowser::HelpBrowser(const QString& strPath,
            const QString& strFileName,
                  QWidget* pwgt
           ) : QDialog(pwgt)
{
//окно со справкой на базе браузера
    setWindowIcon(QIcon(":/images/pictures/graph_ico.ico"));
    setWindowFlags(Qt::Dialog);
    setWindowFlags(Qt::CustomizeWindowHint |Qt::WindowMinMaxButtonsHint| Qt::WindowCloseButtonHint);
    setMinimumSize(1350, 500);
    move(200, 100);
    setWindowModality(Qt::WindowModal);
    setWindowTitle("Справка");

    QPushButton*  pcmdBack    = new QPushButton("<<");
    //QPushButton*  pcmdHome    = new QPushButton("Справка");
    QPushButton*  pcmdForward = new QPushButton(">>");
    QTextBrowser* ptxtBrowser = new QTextBrowser;

    connect(pcmdBack, SIGNAL(clicked()), ptxtBrowser, SLOT(backward()));
    //connect(pcmdHome, SIGNAL(clicked()), ptxtBrowser, SLOT(home()));
    connect(pcmdForward, SIGNAL(clicked()), ptxtBrowser, SLOT(forward()));
    connect(ptxtBrowser, SIGNAL(backwardAvailable(bool)), pcmdBack, SLOT(setEnabled(bool)));
    connect(ptxtBrowser, SIGNAL(forwardAvailable(bool)), pcmdForward, SLOT(setEnabled(bool)));

    ptxtBrowser->setSearchPaths(QStringList() << strPath);
    ptxtBrowser->setSource(QString("help.htm"));
    ptxtBrowser->setSource(strFileName);
    //Layout setup
    QVBoxLayout* pvbxLayout = new QVBoxLayout;
    QHBoxLayout* phbxLayout = new QHBoxLayout;
    //QHBoxLayout *mainLayout = new QHBoxLayout(this);
    phbxLayout->addWidget(pcmdBack);
    //phbxLayout->addWidget(pcmdHome);
    phbxLayout->addWidget(ptxtBrowser);
    phbxLayout->addWidget(pcmdForward);
    pvbxLayout->addLayout(phbxLayout);
    setLayout(pvbxLayout);

}



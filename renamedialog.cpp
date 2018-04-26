#include "renamedialog.h"
#include <QLayout>

RenameDialog::RenameDialog(QString name, QWidget *parent)
{
    setWindowTitle(name);
    lineEdit = new QLineEdit(this);
    lineEdit->setFixedWidth(20);
    closeButton = new QPushButton(name, this);
    connect(closeButton, SIGNAL(clicked()), this, SLOT(renameAndClose()));
    QHBoxLayout *topLeftLayout = new QHBoxLayout;
    topLeftLayout->addWidget(lineEdit);
    QHBoxLayout *topRightLayout = new QHBoxLayout;
    topRightLayout->addWidget(closeButton);
    QHBoxLayout *mainLayout = new QHBoxLayout(this);
    mainLayout->addLayout(topLeftLayout);
    mainLayout->addLayout(topRightLayout);
    mainLayout->setMargin(11);
    mainLayout->setSpacing(6);
    setWindowIcon(QIcon(":/images/pictures/graph_ico.ico"));

}

void RenameDialog::renameAndClose()
{
    newName = lineEdit->text();
    emit close();
}

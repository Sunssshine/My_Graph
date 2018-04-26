#include "aboutwindow.h"
#include "ui_aboutwindow.h"

AboutWindow::AboutWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AboutWindow)
{
    ui->setupUi(this);
    setWindowTitle("Something about me");
    QPixmap pixmap(":/images/photos/myPhoto.jpg");
    setWindowIcon(QIcon(":/images/pictures/bitcoin.ico"));
    ui->image->setPixmap(pixmap);
}

AboutWindow::~AboutWindow()
{
    delete ui;
}

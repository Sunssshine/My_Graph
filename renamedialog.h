#ifndef RENAMEDIALOG_H
#define RENAMEDIALOG_H
#include <QDialog>
#include <QLineEdit>
#include <QPushButton>


class RenameDialog : public QDialog
{
    Q_OBJECT
public:
    RenameDialog(QString name, QWidget *parent = 0);
    QLineEdit * lineEdit;
    QPushButton * closeButton;
    QString newName = "";
public slots:
    void renameAndClose();

};

#endif // RENAMEDIALOG_H

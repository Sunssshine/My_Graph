#ifndef HELPBROWSER_H
#define HELPBROWSER_H
#include <QtWidgets>

//класс для отображения справки
class HelpBrowser : public QDialog{
    Q_OBJECT

public:
    HelpBrowser(const QString& strPath,const QString& strFileName, QWidget* pwgt  = 0 );//конструктор для окна справки
    QString name;

};

#endif // HELPBROWSER_H

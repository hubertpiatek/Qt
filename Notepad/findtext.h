#ifndef FINDTEXT_H
#define FINDTEXT_H

#include <QDialog>
#include <qplaintextedit.h>
#include <qtextedit.h>
#include "mainwindow.h"
namespace Ui {
class FindText;
}

class FindText : public QDialog
{
    Q_OBJECT

public:
    explicit FindText(QString  t,QWidget *parent = nullptr);
      explicit FindText(QWidget *parent = nullptr);
    ~FindText();
    QString alltext;
    void setMyText(const QString &);

signals:
  void findtextsend(QString text);
  void setdefaultcolors(QString text);

private slots:
    void on_pushButton_clicked();



    void on_buttonBox_accepted();

private:
    Ui::FindText *ui;
    QString t;
};

#endif // FINDTEXT_H

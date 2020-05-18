#include "findtext.h"
#include "mainwindow.h"
#include "mainwindow.h"
#include "ui_findtext.h"

#include <QMessageBox>
#include <qmessagebox.h>
#include <qmessagebox.h>
#include <ui_mainwindow.h>

FindText::FindText(QString t, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FindText)
{
    this->t =t;
    ui->setupUi(this);

}

FindText::FindText(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FindText)
{
    ui->setupUi(this);

}



FindText::~FindText()
{
    delete ui;
}

void FindText::setMyText(const QString &)
{

}

void FindText::on_pushButton_clicked()
{


    QString text =ui->plainTextEdit2->toPlainText();
    emit findtextsend(text);

}

void FindText::on_buttonBox_accepted()
{
    QString text =ui->plainTextEdit2->toPlainText();
    emit setdefaultcolors(text);
   close();
}

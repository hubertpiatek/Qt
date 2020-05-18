#include "replacetext.h"
#include "ui_replacetext.h"

ReplaceText::ReplaceText(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ReplaceText)
{
    ui->setupUi(this);
}

ReplaceText::~ReplaceText()
{
    delete ui;
}


void ReplaceText::on_pushButton22_clicked()
{
    QString text =ui->textEdit->toPlainText();
    QString text2 = ui->chuj->toPlainText();
    emit replacetextsend(text,text2);
}

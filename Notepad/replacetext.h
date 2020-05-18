#ifndef REPLACETEXT_H
#define REPLACETEXT_H

#include <QDialog>

namespace Ui {
class ReplaceText;
}

class ReplaceText : public QDialog
{
    Q_OBJECT

public:
    explicit ReplaceText(QWidget *parent = nullptr);
    ~ReplaceText();
signals:
void replacetextsend(QString text,QString text2);

private slots:


void on_pushButton22_clicked();

private:
    Ui::ReplaceText *ui;
};

#endif // REPLACETEXT_H

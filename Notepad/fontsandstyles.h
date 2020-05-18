#ifndef FONTSANDSTYLES_H
#define FONTSANDSTYLES_H

#include <QDialog>

namespace Ui {
class FontsAndStyles;
}

class FontsAndStyles : public QDialog
{
    Q_OBJECT

public:
    explicit FontsAndStyles(QWidget *parent = nullptr);
    ~FontsAndStyles();
signals:
    void changefontcolor(int index);
    void changebackgroundcolor(int index);
    void changefontsize(int index);
    void changebold(int state);
    void changeitalic(int state);
    void changeunderline(int state);
private slots:


    void on_comboBox_currentIndexChanged(int index);

    void on_comboBox_2_currentIndexChanged(int index);

    void on_buttonBox_accepted();

    void on_comboBox_3_currentIndexChanged(int index);

    void on_checkBox_stateChanged(int arg1);

    void on_checkBox_2_stateChanged(int arg1);

    void on_checkBox_3_stateChanged(int arg1);

private:
    Ui::FontsAndStyles *ui;
};

#endif // FONTSANDSTYLES_H

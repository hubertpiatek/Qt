#include "fontsandstyles.h"
#include "ui_fontsandstyles.h"

FontsAndStyles::FontsAndStyles(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FontsAndStyles)
{
    ui->setupUi(this);
}

FontsAndStyles::~FontsAndStyles()
{
    delete ui;
}



void FontsAndStyles::on_comboBox_currentIndexChanged(int index)
{
    changefontcolor(index);
}

void FontsAndStyles::on_comboBox_2_currentIndexChanged(int index)
{
    changebackgroundcolor(index);
}

void FontsAndStyles::on_buttonBox_accepted()
{
    this->close();
}

void FontsAndStyles::on_comboBox_3_currentIndexChanged(int index)
{
    changefontsize(index);
}

void FontsAndStyles::on_checkBox_stateChanged(int arg1)
{
    changebold(arg1);

}

void FontsAndStyles::on_checkBox_2_stateChanged(int arg1)
{
    changeitalic(arg1);
}

void FontsAndStyles::on_checkBox_3_stateChanged(int arg1)
{
    changeunderline(arg1);
}

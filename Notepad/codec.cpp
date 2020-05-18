#include "codec.h"
#include "ui_codec.h"

Codec::Codec(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Codec)
{
    ui->setupUi(this);
}

Codec::~Codec()
{
    delete ui;
}

void Codec::on_comboBox_currentIndexChanged(int index)
{
    setcodec(index);
}

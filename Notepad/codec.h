#ifndef CODEC_H
#define CODEC_H

#include <QDialog>

namespace Ui {
class Codec;
}

class Codec : public QDialog
{
    Q_OBJECT

public:
    explicit Codec(QWidget *parent = nullptr);
    ~Codec();
signals:
    void setcodec(int index);
private slots:
    void on_comboBox_currentIndexChanged(int index);

private:
    Ui::Codec *ui;
};

#endif // CODEC_H

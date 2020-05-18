#include "codec.h"
#include "findtext.h"
#include "findtext.h"
#include "fontsandstyles.h"
#include "mainwindow.h"
#include "replacetext.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QColorDialog>
#include <QFont>
#include <QFont>
#include <QRegularExpression>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui3(new Ui::MainWindow)
{
    ui3->setupUi(this);
    pt.toPlainText()=ui3->textEdit->toPlainText();
    this->setCentralWidget(ui3->textEdit);
    out2=nullptr;
    file=nullptr;
    isFirstTime=true;
    highlighter = new Highlighter(ui3->textEdit->document());
}

MainWindow::~MainWindow()
{
    delete ui3;
}

QString MainWindow::AllTheText()
{
    return ui3->textEdit->toPlainText();
}

void MainWindow::findtext2(QString text2)
{

        QString toFind = text2;
        QString text = ui3->textEdit->toPlainText();
        ui3->textEdit->moveCursor(QTextCursor::Start);
        QColor color = QColor(Qt::lightGray);
        QList<QTextEdit::ExtraSelection> extraSelections;
            while(ui3->textEdit->find(toFind, QTextDocument::FindCaseSensitively))
            {
                QTextEdit::ExtraSelection extra;
                extra.format.setBackground(color);
                extra.cursor = ui3->textEdit->textCursor();
                extraSelections.append(extra);
            }
            ui3->textEdit->setExtraSelections(extraSelections);

}

void MainWindow::replacetext2(QString text, QString text2)
{
    QString text11;
    text11=ui3->textEdit->toPlainText();
    text11.replace(QString(text),QString(text2));
    ui3->textEdit->clear();
    ui3->textEdit->appendPlainText( text11);
}

void MainWindow::changefontcolor2(int index2)
{
    if(index2==0)
    {
       ui3->textEdit->setStyleSheet("color: black");
    }
    else if(index2==1)
    {
         ui3->textEdit->setStyleSheet("color: green");
    }
    else if(index2==2)
    {
         ui3->textEdit->setStyleSheet("color: red");
    }
    else if(index2==3)
    {
         ui3->textEdit->setStyleSheet("color: yellow");
    }
    else if(index2==4)
    {
         ui3->textEdit->setStyleSheet("color: blue");
    }

}

void MainWindow::changebackgroundcolor2(int index2)
{

    if(index2==0)
    {
        ui3->textEdit->setStyleSheet("background-color: white");
    }
    else if(index2==1)
    {
         ui3->textEdit->setStyleSheet("background-color: red");
    }
    else if(index2==2)
    {
         ui3->textEdit->setStyleSheet("background-color: green");
    }
    else if(index2==3)
    {
         ui3->textEdit->setStyleSheet("background-color: blue");
    }
    else if(index2==4)
    {
         ui3->textEdit->setStyleSheet("background-color: black");
    }
}

void MainWindow::changefontsize2(int index2)
{
    if(index2==0)
    {
        QFont f1 = ui3->textEdit->font();
        f1.setPointSize(8);
        ui3->textEdit->setFont(f1);
    }
    else if(index2==1)
    {
        QFont f1 = ui3->textEdit->font();
        f1.setPointSize(10);
        ui3->textEdit->setFont(f1);
    }
    else if(index2==2)
    {
        QFont f1 = ui3->textEdit->font();
        f1.setPointSize(12);
        ui3->textEdit->setFont(f1);
    }
    else if(index2==3)
    {
        QFont f1 = ui3->textEdit->font();
        f1.setPointSize(14);
        ui3->textEdit->setFont(f1);
    }
    else if(index2==4)
    {
        QFont f1 = ui3->textEdit->font();
        f1.setPointSize(16);
        ui3->textEdit->setFont(f1);
    }
    else if(index2==5)
    {
        QFont f1 = ui3->textEdit->font();
        f1.setPointSize(18);
        ui3->textEdit->setFont(f1);
    }
    else if(index2==6)
    {
        QFont f1 = ui3->textEdit->font();
        f1.setPointSize(20);
        ui3->textEdit->setFont(f1);
    }
    else if(index2==7)
    {
        QFont f1 = ui3->textEdit->font();
        f1.setPointSize(22);
        ui3->textEdit->setFont(f1);
    }
    else if(index2==8)
    {
        QFont f1 = ui3->textEdit->font();
        f1.setPointSize(26);
        ui3->textEdit->setFont(f1);
    }
    else if(index2==9)
    {
        QFont f1 = ui3->textEdit->font();
        f1.setPointSize(30);
        ui3->textEdit->setFont(f1);
    }
    else if(index2==10)
    {
        QFont f1 = ui3->textEdit->font();
        f1.setPointSize(32);
        ui3->textEdit->setFont(f1);
    }
    else if(index2==11)
    {
        QFont f1 = ui3->textEdit->font();
        f1.setPointSize(36);
        ui3->textEdit->setFont(f1);
    }
}

void MainWindow::changebold2(int state2)
{
    if(state2==0)
    {
        QFont f(ui3->textEdit->font());
        f.setBold(false);
        ui3->textEdit->setFont(f);
    }
    else
    {
        QFont f(ui3->textEdit->font());
        f.setBold(true);
        ui3->textEdit->setFont(f);
    }

}

void MainWindow::changeitalic2(int state2)
{
    if(state2==0)
    {
        QFont f(ui3->textEdit->font());
        f.setItalic(false);
        ui3->textEdit->setFont(f);
    }
    else if(state2==2)
    {
        QFont f(ui3->textEdit->font());
        f.setItalic(true);
        ui3->textEdit->setFont(f);
    }
}

void MainWindow::changeunderline2(int state2)
{
    if(state2==0)
    {
        QFont f(ui3->textEdit->font());
        f.setUnderline(false);
        ui3->textEdit->setFont(f);
    }
    else if(state2==2)
    {

        QFont f(ui3->textEdit->font());
        f.setUnderline(true);
        ui3->textEdit->setFont(f);
    }

}

void MainWindow::setcodec2(int index2)
{

    if(file!=nullptr )
        {
        if(index2==0)
        {
            out2->setCodec("ANSI");
            *out2<<textout;
            file->flush();
            file->close();
        }
        else if(index2==1)
        {
            out2->setCodec("UTF-8");
            *out2<<textout;
            file->flush();
            file->close();
        }
        else if(index2==2)
        {
            out2->setCodec("UTF-16");
            *out2<<textout;
            file->flush();
            file->close();
        }
        }
        else
        {
            QMessageBox::about(this,"Warning!","First, save the file to change codec");
        }
}


void MainWindow::on_actionNew_triggered()
{
    file_path="";
    ui3->textEdit->setPlainText("");
    file=nullptr;
}

void MainWindow::on_actionOpen_triggered()
{
    QString file_name_ = QFileDialog::getOpenFileName(this,"Open the file");
       file = new QFile(file_name_);
       file_path = file_name_;
       if(!file->open(QFile::ReadOnly | QFile::Text))
       {
           QMessageBox::warning(this,"..","file not open");
           return;
       }
       in = new QTextStream(file);
       textout = in->readAll();
       out2 = new QTextStream(file);
       ui3->textEdit->setPlainText(textout);
       asd = ui3->textEdit->toPlainText();
       file->close();

}

void MainWindow::setdefaultcolors2(QString text2)
{
    QColor color = QColor(Qt::white);
    QList<QTextEdit::ExtraSelection> extraSelections;
        while(ui3->textEdit->find(text2, QTextDocument::FindCaseSensitively))
        {
            QTextEdit::ExtraSelection extra;
            extra.format.setBackground(color);
            extra.cursor = ui3->textEdit->textCursor();
            extraSelections.append(extra);
        }
        ui3->textEdit->setExtraSelections(extraSelections);
}

void MainWindow::on_actionSave_triggered()
{
    if(file!=nullptr)
        {
        out2 = new QTextStream(file);
        if(!file->open(QFile::WriteOnly | QFile::Text))
        {
            QMessageBox::warning(this,"..","file not open");
            return;
        }
        textout = ui3->textEdit->toPlainText();
        *out2<<textout;
        file->flush();
        file->close();
        }
        else
        {
            on_actionSave_As_triggered();
        }
}

void MainWindow::on_actionSave_As_triggered()
{
    file_name_ = QFileDialog::getSaveFileName(this,"Save the file as","",
                                                tr("All files (*.*);;TXT (*.txt);;CPP (*.cpp);;HTML(*.html);;JAVA(*.java)" ));
        file = new QFile(file_name_);
        file_path = file_name_;
        out2 = new QTextStream(file);
        if(!file->open(QFile::WriteOnly | QFile::Text))
        {
            QMessageBox::warning(this,"..","file not open");
            file=nullptr;
            return;
        }
        textout = ui3->textEdit->toPlainText();
        *out2<<textout;
        file->flush();
        file->close();
}

void MainWindow::on_actionCut_triggered()
{
    ui3->textEdit->cut();
}

void MainWindow::on_actionCopy_triggered()
{
    ui3->textEdit->copy();
}

void MainWindow::on_actionPaste_triggered()
{
    ui3->textEdit->paste();
}

void MainWindow::on_actionRedo_triggered()
{
    ui3->textEdit->redo();
}

void MainWindow::on_actionUndo_triggered()
{
    ui3->textEdit->undo();

}

void MainWindow::on_actionAbout_triggered()
{
 QMessageBox::about(this,"About notepad","Programowanie Wieloplatformowe w Qt \nHubert Piątek 2019"
                                         "\nWydział Fizyki i Informatyki Stosowanej ");
}

void MainWindow::on_actionFind_Text_triggered()
{
    FindText *ft = new FindText(this);
    connect(ft,SIGNAL(findtextsend(QString)),this,SLOT(findtext2(QString)));
    connect(ft,SIGNAL(setdefaultcolors(QString)),this,SLOT(setdefaultcolors2(QString)));
    ft->exec();
}

void MainWindow::connectionfindtext()
{

}

void MainWindow::on_actionFonts_and_Styles_triggered()
{
    FontsAndStyles *fas = new FontsAndStyles();
    connect(fas,SIGNAL(changefontcolor(int)),this,SLOT(changefontcolor2(int)));
    connect(fas,SIGNAL(changebackgroundcolor(int)),this,SLOT(changebackgroundcolor2(int)));
    connect(fas,SIGNAL(changefontsize(int)),this,SLOT(changefontsize2(int)));
    connect(fas,SIGNAL(changebold(int)),this,SLOT(changebold2(int)));
    connect(fas,SIGNAL(changeitalic(int)),this,SLOT(changeitalic2(int)));
    connect(fas,SIGNAL(changeunderline(int)),this,SLOT(changeunderline2(int)));
    fas->exec();
}

void MainWindow::on_actionReplace_Text_triggered()
{
    ReplaceText *rt = new ReplaceText(this);
    connect(rt,SIGNAL(replacetextsend(QString,QString)),this,SLOT(replacetext2(QString,QString)));
    rt->exec();
}

void MainWindow::on_actionSet_Codec_triggered()
{
    Codec *cd = new Codec(this);
    connect(cd,SIGNAL(setcodec(int)),this,SLOT(setcodec2(int)));
    cd->exec();
}

void MainWindow::on_textEdit_textChanged()
{

}

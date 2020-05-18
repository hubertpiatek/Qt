#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "highlighter.h"
#include "findtext.h"
#include <QVector>
#include <QSyntaxHighlighter>
#include <QMainWindow>
#include <qplaintextedit.h>
#include <QTextStream>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QString AllTheText() ;
    Ui::MainWindow *ui3;
    QPlainTextEdit pt;
    QString asd;

private slots:
    void on_actionNew_triggered();
    void findtext2(QString text2);
    void replacetext2(QString text,QString text2);
    void changefontcolor2(int index2);
    void changebackgroundcolor2(int index2);
    void changefontsize2(int index2);
    void changebold2(int state2);
    void changeitalic2(int state2);
    void changeunderline2(int state2);
    void setcodec2(int index2);
    void on_actionOpen_triggered();
    void setdefaultcolors2(QString text2);


    void on_actionSave_triggered();

    void on_actionSave_As_triggered();

    void on_actionCut_triggered();

    void on_actionCopy_triggered();

    void on_actionPaste_triggered();

    void on_actionRedo_triggered();

    void on_actionUndo_triggered();

    void on_actionAbout_triggered();

    void on_actionFind_Text_triggered();
    void connectionfindtext();

    void on_actionFonts_and_Styles_triggered();

    void on_actionReplace_Text_triggered();

    void on_actionSet_Codec_triggered();

    void on_textEdit_textChanged();

private:
    bool isFirstTime;
    QString file_path;
    QString file_name_;
    QFile *file;
    QTextStream *out2;
    QTextStream *in;
    QString textout;
    Highlighter *highlighter;

};
#endif // MAINWINDOW_H

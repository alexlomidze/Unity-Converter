#ifndef UNITYCONVERTER_H
#define UNITYCONVERTER_H

#include <QMainWindow>
#include "si.h"
#include "units.h"
#include "help.h"
#include "about.h"


namespace Ui {
class unityconverter;
}

class unityconverter : public QMainWindow
{
    Q_OBJECT

public:
    explicit unityconverter(QWidget *parent = 0);
    ~unityconverter();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_15_clicked();



    void on_pushButton_16_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_13_clicked();



    void on_actionHelp_triggered();

    void on_actionAbout_triggered();


    void on_actionQuit_triggered();

private:
    Ui::unityconverter *ui;
    SI *si;
    units *siu;
    help *helpWindow;
    about *aboutWindow;
};

#endif // UNITYCONVERTER_H

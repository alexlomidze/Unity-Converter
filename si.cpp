#include "si.h"
#include "ui_si.h"
#include <QPixmap>

SI::SI(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SI)
{
    ui->setupUi(this);
}

SI::~SI()
{
    delete ui;
}

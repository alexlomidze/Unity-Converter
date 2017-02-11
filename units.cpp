#include "units.h"
#include "ui_units.h"
#include <QPixmap>

units::units(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::units)
{
    ui->setupUi(this);
}

units::~units()
{
    delete ui;
}

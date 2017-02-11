#ifndef UNITS_H
#define UNITS_H

#include <QDialog>

namespace Ui {
class units;
}

class units : public QDialog
{
    Q_OBJECT

public:
    explicit units(QWidget *parent = 0);
    ~units();

private:
    Ui::units *ui;
};

#endif // UNITS_H

#ifndef SI_H
#define SI_H

#include <QDialog>

namespace Ui {
class SI;
}

class SI : public QDialog
{
    Q_OBJECT

public:
    explicit SI(QWidget *parent = 0);
    ~SI();

private:
    Ui::SI *ui;
};

#endif // SI_H

#include "unityconverter.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    unityconverter w;
    w.show();

    return a.exec();
}

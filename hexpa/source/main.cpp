#include "hexpa.h"
#include <QtGui/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Parzer mainWin;
    mainWin.show();
    return a.exec();
}

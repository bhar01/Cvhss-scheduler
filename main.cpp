#include "cvv.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    cvv w;
    w.show();
    w.setFixedSize(1400,1000);
    //w.setWindowFlags(Qt::WindowMinimizeButtonHint);

    return a.exec();
}

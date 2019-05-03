#include "CancerData.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CancerData w;
    w.show();

    return a.exec();
}

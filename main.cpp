#include "happy.h"
#include <QPoint>

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Happy w;
    QPoint pos(800, 30);
    w.move(pos);
    w.show();


    return a.exec();
}

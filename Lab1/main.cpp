#include "shape.h"
#include "soldier.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Shape w;
//    Soldier soldier;
    w.show();
    //soldier.show();
    return a.exec();
}

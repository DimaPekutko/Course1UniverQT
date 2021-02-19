#include "mainwindow.h"
#include "circle.h"

#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsView>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainWindow w;
    //w.show();

    QGraphicsScene *scene = new QGraphicsScene();
    Circle *circle = new Circle();

    scene->addItem(circle);
    circle->drawFigure();

    circle->setFlag(QGraphicsItem::ItemIsFocusable);
    circle->setFocus();

    int wWidth = 720, wHeight = 540;
    QGraphicsView *view = new QGraphicsView(scene);
    view->setFixedSize(wWidth, wHeight);
    view->setSceneRect(0, 0, wWidth, wHeight);
    view->fitInView(0, 0, wWidth, wHeight, Qt::KeepAspectRatio);
    view->show();

    return a.exec();
}

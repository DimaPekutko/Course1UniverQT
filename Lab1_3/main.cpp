#include "mainwindow.h"
#include "square.h"
#include "shape.h"
#include "rect.h"
#include "circle.h"
#include "ellipse.h"

#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsView>

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);

    QGraphicsScene *scene = new QGraphicsScene();

    Square *square = new Square();
    Rect *rect = new Rect();
    Circle *circle = new Circle();
    Ellipse *ellipse = new Ellipse();

    scene->addItem(square);
    square->drawFigure();

    scene->addItem(rect);
    rect->drawFigure();

    scene->addItem(circle);
    circle->drawFigure();

    scene->addItem(ellipse);
    ellipse->drawFigure();

    square->setFlag(QGraphicsItem::ItemIsFocusable);
    square->setFocus();
    rect->setFlag(QGraphicsItem::ItemIsFocusable);
    rect->setFocus();
    circle->setFlag(QGraphicsItem::ItemIsFocusable);
    circle->setFocus();
    ellipse->setFlag(QGraphicsItem::ItemIsFocusable);
    ellipse->setFocus();


    int width = 720, height = 540;
    QGraphicsView *view = new QGraphicsView(scene);
    view->setFixedSize(width, height);
    view->setSceneRect(0, 0, width, height);
    view->fitInView(0, 0, width, height, Qt::KeepAspectRatio);
    view->show();

    return a.exec();
}

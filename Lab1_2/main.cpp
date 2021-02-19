#include "mainwindow.h"
#include "shape.h"
#include "soldier.h"

#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsView>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QGraphicsScene *scene = new QGraphicsScene();

    //QGraphicsRectItem *rect = new QGraphicsRectItem();

    Shape *rect = new Shape();
    Soldier *soldier = new Soldier();

    scene->addItem(rect);
    rect->makeShape();

    scene->addItem(soldier);
    soldier->makeShape();

    rect->setFlag(QGraphicsItem::ItemIsFocusable);
    rect->setFocus();

    soldier->setFlag(QGraphicsItem::ItemIsFocusable);
    soldier->setFocus();


    QGraphicsView *view = new QGraphicsView(scene);
    view->show();

    //MainWindow *main = new MainWindow();
    //main->show();

    return a.exec();
}

#include "shape.h"

#include <QDebug>

Shape::Shape() {
    qDebug() << "shape construct";
}

void Shape::keyPressEvent(QKeyEvent *event) {
    if(event->key() == Qt::Key_Right) {
        setPos(x()+10,y());
    }
    else if(event->key() == Qt::Key_Left) {
        setPos(x()-10,y());
    }
}

void Shape::makeShape() {
    QGraphicsRectItem *rect = new QGraphicsRectItem();
    rect->setRect(0,-100,50,50);
    this->addToGroup(rect);
}

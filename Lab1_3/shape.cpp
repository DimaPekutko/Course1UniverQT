#include "shape.h"

#include <QDebug>

Shape::Shape()
{

}

float Shape::getPerimeter() {
    return 0;
}
float Shape::getSquare() {
    return 0;
}
void Shape::drawFigure() {

}
void Shape::keyPressEvent(QKeyEvent *event) {
    if(event->key() == Qt::Key_Right) {
        setPos(x()+10,y());
    }
    else if(event->key() == Qt::Key_Left) {
        setPos(x()-10,y());
    }
}
void Shape::mousePressEvent(QGraphicsSceneMouseEvent *event) {
    setPos(x()+10,y());

    MainWindow *w = new MainWindow();
    w->show();
    //w->changeWindow(this);
    qDebug() << this;
    //MainWindow *w;
    //w->show();
}

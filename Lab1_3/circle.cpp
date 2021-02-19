#include "circle.h"

#include <QDebug>

Circle::Circle()
{

}

float Circle::getPerimeter() {
    return 2*3.14*radius;
}
float Circle::getSquare() {
    return 3.14*radius*radius;
}
void Circle::drawFigure() {
    QGraphicsEllipseItem *circle = new QGraphicsEllipseItem (x,y,radius*2, radius*2);
    this->addToGroup(circle);
}
void Circle::keyPressEvent(QKeyEvent *event) {
    if(event->key() == Qt::Key_Space) {
        QString desc = "Perimeter : ";
        desc.append(QString::number(getPerimeter()));
        desc.append('\n');
        desc.append("Circle: ");
        desc.append(QString::number(getSquare()));
        QMessageBox::about(0, "Square", desc);
    }
}

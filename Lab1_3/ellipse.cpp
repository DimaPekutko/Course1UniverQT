#include "ellipse.h"

Ellipse::Ellipse()
{

}

float Ellipse::getPerimeter() {
    return 2*3.14*radius2;
}
float Ellipse::getSquare() {
    return 3.14*radius*radius2;
}
void Ellipse::drawFigure() {
    QGraphicsEllipseItem *circle = new QGraphicsEllipseItem (x,y,radius*2, radius2*2);
    this->addToGroup(circle);
}
void Ellipse::keyPressEvent(QKeyEvent *event) {
    if(event->key() == Qt::Key_Space) {
        QString desc = "Perimeter : ";
        desc.append(QString::number(getPerimeter()));
        desc.append('\n');
        desc.append("Square: ");
        desc.append(QString::number(getSquare()));
        QMessageBox::about(0, "Ellipse", desc);
    }
}

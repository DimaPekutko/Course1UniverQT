#include "rect.h"

Rect::Rect()
{
    qDebug() << "\n";
    qDebug() << "Rect figure: ";
    qDebug() << "Width: " << width;
    qDebug() << "Height: " << height;
    qDebug() << "Perimeter: " << getPerimeter();
    qDebug() << "Square: " << getSquare();
}

float Rect::getPerimeter() {
    return ((width*2)+(height*2));
}
float Rect::getSquare() {
    return width*height;
}
void Rect::drawFigure() {
    QGraphicsRectItem *square = new QGraphicsRectItem();
    square->setRect(x,y,width,height);
    this->addToGroup(square);
}
//void Rect::mousePressEvent(QGraphicsSceneMouseEvent *event) {
//    QString desc = "Perimeter : ";
//    desc.append(QString::number(getPerimeter()));
//    desc.append('\n');
//    desc.append("Square: ");
//    desc.append(QString::number(getSquare()));
//    QMessageBox::about(0, "Square", desc);
//}
void Rect::keyPressEvent(QKeyEvent *event) {
    if(event->key() == Qt::Key_Space) {
        QString desc = "Perimeter : ";
        desc.append(QString::number(getPerimeter()));
        desc.append('\n');
        desc.append("Rect: ");
        desc.append(QString::number(getSquare()));
        QMessageBox::about(0, "Square", desc);
    }
}

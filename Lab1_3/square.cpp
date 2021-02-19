#include "square.h"

#include <QDebug>

Square::Square()
{
    qDebug() << "\n";
    qDebug() << "Sqare figure: ";
    qDebug() << "Width: " << width;
    qDebug() << "Perimeter: " << getPerimeter();
    qDebug() << "Square: " << getSquare();
}

float Square::getPerimeter() {
    return width*4;
}
float Square::getSquare() {
    return width*width;
}
void Square::drawFigure() {
    QGraphicsRectItem *square = new QGraphicsRectItem();
    square->setRect(x,y,width,width);
    this->addToGroup(square);
}
//void Square::mousePressEvent(QGraphicsSceneMouseEvent *event) {
//    QString desc = "Perimeter : ";
//    desc.append(QString::number(getPerimeter()));
//    desc.append('\n');
//    desc.append("Square: ");
//    desc.append(QString::number(getSquare()));
//    QMessageBox::about(0, "Square", desc);
//}
void Square::keyPressEvent(QKeyEvent *event) {
    if(event->key() == Qt::Key_Space) {
        QString desc = "Perimeter : ";
        desc.append(QString::number(getPerimeter()));
        desc.append('\n');
        desc.append("Square: ");
        desc.append(QString::number(getSquare()));
        QMessageBox::about(0, "Square", desc);
    }
}

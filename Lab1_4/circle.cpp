#include "circle.h"

Circle::Circle()
{

}

float Circle::getPer() {
    return 0;
}

float Circle::getSquare() {
    return 0;
}

//void Circle::keyPressEvent(QKeyEvent *event) {

//}

void Circle::drawFigure() {
    QGraphicsEllipseItem *circle = new QGraphicsEllipseItem (x,y,sideWidth*2, sideWidth*2);
    this->addToGroup(circle);

}


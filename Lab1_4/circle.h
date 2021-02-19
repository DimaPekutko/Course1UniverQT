#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"

#include <QGraphicsEllipseItem>

class Circle : public Shape
{
private:
    float x = 100;
    float y = 100;
    float sideWidth = 50;
public:
    Circle();
    float getPer();
    float getSquare();
    void drawFigure();
    //void keyPressEvent(QKeyEvent *event);
};

#endif // CIRCLE_H

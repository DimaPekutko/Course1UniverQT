#ifndef ELLIPSE_H
#define ELLIPSE_H

#include "circle.h"

class Ellipse : public Circle
{
public:
    Ellipse();
    int x = 0, y = 150;
    float radius = 50, radius2 = 70;
    float getPerimeter();
    float getSquare();
    void drawFigure();
    //void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void keyPressEvent(QKeyEvent *event);
};

#endif // ELLIPSE_H

#ifndef SQUARE_H
#define SQUARE_H

#include "shape.h"

class Square : public Shape
{
public:
    Square();
public:
    int x = 400, y = 0;
    float width = 100;
    float getPerimeter();
    float getSquare();
    void drawFigure();
//    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void keyPressEvent(QKeyEvent *event);
};

#endif // SQUARE_H

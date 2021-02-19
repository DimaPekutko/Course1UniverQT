#ifndef CIRCLE_H
#define CIRCLE_H

#include <shape.h>

class Circle : public Shape
{
public:
    Circle();
public:
    int x = 0, y = 0;
    float radius = 50;
    float getPerimeter();
    float getSquare();
    void drawFigure();
    //void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void keyPressEvent(QKeyEvent *event);
};

#endif // CIRCLE_H

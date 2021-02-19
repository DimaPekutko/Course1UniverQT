#ifndef RECT_H
#define RECT_H

#include "square.h"

#include <QDebug>

class Rect : public Square
{
public:
    Rect();
public:
    int x = 400, y = 150;
    float width = 100;
    float height = 200;
    float getPerimeter();
    float getSquare();
    void drawFigure();
    void keyPressEvent(QKeyEvent *event);
//    void mousePressEvent(QGraphicsSceneMouseEvent *event);
};

#endif // RECT_H

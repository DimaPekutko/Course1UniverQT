#ifndef SHAPE_H
#define SHAPE_H

#include "mainwindow.h"

#include <QGraphicsItemGroup>
#include <QKeyEvent>
#include <QDebug>

class Shape : public QGraphicsItemGroup
{
private:
    float x;
    float y;
    float sideWidth;
public:
    Shape();
    float getPer();
    float getSquare();
    void drawFigure();
    void keyPressEvent(QKeyEvent *event);
};

#endif // SHAPE_H

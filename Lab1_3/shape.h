#ifndef SHAPE_H
#define SHAPE_H

#include "mainwindow.h"

#include <QGraphicsItemGroup>
#include <QGraphicsRectItem>
#include <QGraphicsEllipseItem>
#include <QKeyEvent>
#include <QGraphicsSceneMouseEvent>
#include <QMessageBox>
#include <QString>
#include <QDebug>
#include <QWidget>

class Shape : public QGraphicsItemGroup
{
public:
    Shape();
public:
    float getPerimeter();
    float getSquare();
    void drawFigure();
    void keyPressEvent(QKeyEvent *event);
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
};

#endif // SHAPE_H

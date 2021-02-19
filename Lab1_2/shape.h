#ifndef SHAPE_H
#define SHAPE_H

#include <QGraphicsItemGroup>
#include <QGraphicsRectItem>
#include <QKeyEvent>

#include <QTimer>

class Shape : public QGraphicsItemGroup
{
public:
    Shape();
public:
    void keyPressEvent(QKeyEvent *event);
    void makeShape();
};

#endif // SHAPE_H

#include "soldier.h"

Soldier::Soldier()
{

}

void Soldier::makeShape() {
    //this->setRect(0,100,100,200);
    //this->setRect(100,200,50,50);
    QGraphicsRectItem *body = new QGraphicsRectItem();
    QGraphicsRectItem *lhand = new QGraphicsRectItem();
    QGraphicsRectItem *rhand = new QGraphicsRectItem();
    QGraphicsRectItem *head = new QGraphicsRectItem();

    head->setRect(120,110,60,-60);
    body->setRect(100,100,100,200);
    lhand->setRect(50,100,50,80);
    rhand->setRect(200,100,50,-80);
    //hands->setRect(50,100,150,50);

    //this->addToGroup(hands);
    this->addToGroup(head);
    this->addToGroup(body);
    this->addToGroup(lhand);
    this->addToGroup(rhand);
}

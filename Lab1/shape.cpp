#include "shape.h"
#include "ui_mainwindow.h"
#include <QDebug>

Shape::Shape(QWidget *parent)
    : QGLWidget(parent)
{
    //ui->setupUi(this);
    //ui->statusbar->showMessage("Hello!!!");
//        glClear(GL_COLOR_BUFFER_BIT); // чистим буфер
}

void Shape::drawObject() {
    qDebug() << objectX;
    glRecti(objectX,objectY,50,100);
}

void Shape::initializeGL() {
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0,800,600,0,0,1);
}

void Shape::resizeGL(int w, int h) {
    glViewport(100, 0, w, h);
}

void Shape::paintGL() {
    drawObject();
    if(isMoving) {
        objectX++;
    }
}

void Shape::mousePressEvent(QMouseEvent *me) {
    if(!isMoving) {
        isMoving = true;
    }
}





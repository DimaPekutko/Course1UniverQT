#ifndef SHAPE_H
#define SHAPE_H

#include <QMainWindow>
#include <QGLWidget>
#include <QtOpenGL>
#include <QTimer>


QT_BEGIN_NAMESPACE
namespace Ui { class Shape; }
QT_END_NAMESPACE

class Shape : public QGLWidget
{
    Q_OBJECT

public:
    Shape(QWidget *parent = 0);
protected:
    bool isMoving = false;
    int moveSpeed = 1;
    int objectX = 10, objectY = 0;
    void drawObject();
    void initializeGL();
    void resizeGL(int nWidth, int nHeight);
    void paintGL();
    void mousePressEvent(QMouseEvent *me); // Реагирует на нажатие кнопок мыши

};
#endif // SHAPE_H

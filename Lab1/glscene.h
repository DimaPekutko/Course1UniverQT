#ifndef GLSCENE_H
#define GLSCENE_H

#include <QGLWidget>

class GlScene : QGLWidget
{
public:
    GlScene();
    void initializeGL() override;
    void resizeGL(int w, int h) override;
    void paintGL() override;
};

#endif // GLSCENE_H

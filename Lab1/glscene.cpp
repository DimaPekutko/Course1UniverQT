#include "glscene.h"

GlScene::GlScene()
{
}

void GlScene::initializeGL() {
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0,800,600,0,0,1);
}
void GlScene::resizeGL(int w, int h) {
    glViewport(0,0,w,h);
}
void GlScene::paintGL() {

}

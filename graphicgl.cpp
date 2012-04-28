#include "graphicgl.h"
#include <QDebug>
GraphicGL::GraphicGL(QWidget *parent) :
    QGLWidget(parent)
{
    this->points=0;
    countX=10;
    countY=10;
    countMinX=2;
    countMinY=2;
}

void GraphicGL::updatePoints(QList<QPair<double, double> *> *points, int countx, int county)
{
    this->points=points;
    countX=countx;
    countY=county;
    updateGL();
}

void GraphicGL::setLitleCounts(int x, int y){
    countMinX=x;
    countMinY=y;
}

int GraphicGL::prepareX(double x)
{
    return (x*(width()-2*pole)/countX);
}

int GraphicGL::prepereY(double y)
{
    return (y*(height()-2*pole)/countY);
}

void GraphicGL::initializeGL()
{
}

void GraphicGL::resizeGL(int nWidth, int nHeight)
{
    glViewport(0, 0, nWidth, nHeight);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0, nWidth, 0, nHeight, -1.0, 1.0);
    glMatrixMode(GL_MODELVIEW);
}

void GraphicGL::paintGL()
{
    glClearColor(255, 255, 255, 1);
    glClear(GL_COLOR_BUFFER_BIT| GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();

    glColor3ub(0,0,0);
    glTranslatef(pole,pole,0);
    glBegin(GL_LINES);
    //ось у
    glVertex2f(0,0);
    glVertex2f(0, height()-2*pole);
    for (int i=0; i<countY; i++){
        glVertex2f( 0.5*pole+1,(height()-2*pole)*i/countY );
        glVertex2f( -0.5*pole,(height()-2*pole)*i/countY );
    }
    for (int i=0; i<countY*countMinY; i++){
        glVertex2f( 0.2*pole+1,((height()-2*pole)*i)/(countY*countMinY) );
        glVertex2f( -0.2*pole,((height()-2*pole)*i)/(countY*countMinY) );
    }
    //ось х
    glVertex2f(0,0);
    glVertex2f(width()-2*pole,0);
    for (int i=0; i<countX; i++){
        glVertex2f((width()-2*pole)*i/countX, 0.5*pole+1);
        glVertex2f((width()-2*pole)*i/countX, -0.5*pole);
    }
    for (int i=0; i<countX*countMinX; i++){
        glVertex2f((width()-2*pole)*i/(countX*countMinX), 0.2*pole+1);
        glVertex2f((width()-2*pole)*i/(countX*countMinX), -0.2*pole);
    }
    glEnd();
    if (points==0){
        return;
    }
    glBegin(GL_LINE_STRIP);
    for (int i=0; i<points->size(); i++){
        int x= prepareX(points->at(i)->first);
        int y= prepereY(points->at(i)->second);
        qDebug()<<"X="<<x<<"Y="<<y;
        glVertex2f(x,y);
    }
    glEnd();
}



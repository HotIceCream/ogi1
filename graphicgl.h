#ifndef GRAPHICGL_H
#define GRAPHICGL_H

#include <QGLWidget>
#include <QList>
class GraphicGL : public QGLWidget
{
    Q_OBJECT
public:
    explicit GraphicGL(QWidget *parent = 0);
    void updatePoints(QList<QPair<double,double>* > *points, int countx, int county);
    void setLitleCounts(int x, int y);
    void initializeGL();
    void resizeGL(int nWidth, int nHeight);
    void paintGL();

signals:
    
public slots:
    
private:
    QList<QPair<double,double>* > *points;
    const static int pole =10;
    double countX;
    double countY;
    double countMinX;
    double countMinY;
    int prepareX(double x);
    int prepereY(double y);
};

#endif // GRAPHICGL_H

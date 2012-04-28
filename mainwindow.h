#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStandardItemModel>
#include <QList>
#include "graphicgl.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private slots:
    void on_buttonDraw_clicked();

    void on_buttonClear_clicked();

    void on_actionClose_triggered();

    void on_buttonAddPoint_clicked();

private:
    Ui::MainWindow *ui;
    QStandardItemModel *model;
    GraphicGL *graphic;
    QList<QPair<double,double>* > *points;
};

#endif // MAINWINDOW_H

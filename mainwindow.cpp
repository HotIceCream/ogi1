#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "doubledelegate.h"
#include <QItemDelegate>
#include <QDebug>
#include "graphicgl.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->editBigX->setValidator(new QIntValidator(1, 50,0));
    ui->editBigY->setValidator(new QIntValidator(1, 50,0));
    ui->editLitleX->setValidator(new QIntValidator(1, 50,0));
    ui->editLitleY->setValidator(new QIntValidator(1, 50,0));
    ui->mainToolBar->setVisible(false);

    //init table
    model = new QStandardItemModel(0,2,0);
    // model->setHeaderData();
    model->setHorizontalHeaderLabels(QStringList()<<"X"<<"Y");
    //ui->tablePoints->
    //ui->tablePoints->setColumnWidth(0,75);
    ui->tablePoints->setColumnWidth(1,750);
    ui->tablePoints->setModel(model);
    ui->tablePoints->horizontalHeader()->resizeSection(0,75);
    ui->tablePoints->horizontalHeader()->resizeSection(1,75);
    ui->tablePoints->setItemDelegateForColumn(0, new DoubleDelegate());
    ui->tablePoints->setItemDelegateForColumn(1, new DoubleDelegate());
    graphic =new GraphicGL();
    ui->topLayout->addWidget(graphic);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_buttonDraw_clicked()
{
    points = new QList<QPair<double,double>* >();
    for (int row=0; row<model->rowCount(); ++row){
        try {
            int x = model->item(row,0)->text().toDouble();
            int y = model->item(row,1)->text().toDouble();
            points->push_back(new QPair<double,double>(x,y));
        }catch (...){
            qDebug()<<"Error while pars row ="<<row;
        }
    }
    graphic->setLitleCounts(ui->editLitleX->text().toInt(),ui->editLitleY->text().toInt());
    graphic->updatePoints(points, ui->editBigX->text().toInt(),ui->editBigY->text().toInt());
}

void MainWindow::on_buttonClear_clicked()
{
    delete points;
    points =0;
    graphic->setLitleCounts(ui->editLitleX->text().toInt(),ui->editLitleY->text().toInt());
    graphic->updatePoints(points,10,10);
}

void MainWindow::on_actionClose_triggered()
{
    exit(0);
}

void MainWindow::on_buttonAddPoint_clicked()
{

    QStandardItem *item = new QStandardItem();
    item->setColumnCount(2);
    item->setText("0");

    model->appendRow(item);
    QStandardItem *item2 = new QStandardItem();
    item2->setColumnCount(2);
    item2->setText("0");
    model->setItem(model->rowCount()-1,1,item2);
}

#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

//void MainWindow::changeWindow(Shape item) {
//    item.setPos(item.x(), item.y()+10);
//}


MainWindow::~MainWindow()
{
    delete ui;
}


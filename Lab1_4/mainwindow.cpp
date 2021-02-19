#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

//void MainWindow::makeUI(Shape obj) {
//    obj.setPos(x()+10, y());
//}


MainWindow::~MainWindow()
{
    delete ui;
}


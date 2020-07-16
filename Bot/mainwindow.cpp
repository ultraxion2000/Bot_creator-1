#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QApplication>
#include <QTranslator>
#include <QLibraryInfo>
#include <QDebug>
#include <QPixmap>
#include <QtGui>

MainWindow::MainWindow(QWidget *parent):
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->setWindowFlags(Qt::FramelessWindowHint);

    QPixmap pix(":/resourec/img/character-16-563887.png");
    ui->image->setPixmap(pix);


    CreateWindow1 = new Create_bot_window();
    connect(CreateWindow1, &Create_bot_window::menuW, this, &MainWindow::show);

    Info = new info();
    connect(Info, &info::infoWindow, this, &MainWindow::show);


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_CreateBotButton_clicked()
{
    CreateWindow1->show();
    this->close();
}


void MainWindow::on_info_clicked()
{
    Info ->show();

}


void MainWindow::on_pushButton_2_clicked()
{
    close();
}

void MainWindow::on_pushButton_clicked()
{


}

void MainWindow::mouseMoveEvent(QMouseEvent *e)
{
    if(myPos.x()>=0 && e->buttons()&& Qt::LeftButton)
    {
        QPoint diff = e->pos()- myPos;
        QPoint newpos = this->pos()+diff;
        this->move(newpos);
    }
}
void MainWindow::mousePressEvent(QMouseEvent *e)
{
    myPos = e->pos();
}
void MainWindow::mouseReleaseEvent(QMouseEvent *e)
{
    myPos = QPoint(-1,1);
}

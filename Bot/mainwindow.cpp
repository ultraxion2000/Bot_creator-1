#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QApplication>
#include <QTranslator>
#include <QLibraryInfo>
#include <QDebug>
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent):
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->setWindowFlags(Qt::FramelessWindowHint);

    QPixmap pix(":/resourec/img/character-16-563887.png");
    ui->image->setPixmap(pix);


    CreateWindow = new Create_bot_window();
    connect(CreateWindow, &Create_bot_window::menuW, this, &MainWindow::show);

    Info = new info();
    connect(Info, &info::infoWindow, this, &MainWindow::show);


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_CreateBotButton_clicked()
{
    CreateWindow->show();
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


#include "mainwindow.h"
#include "ui_mainwindow.h"



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    CreateWindow = new Create_bot_window();
    connect(CreateWindow, &Create_bot_window::menuW, this, &MainWindow::show);
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

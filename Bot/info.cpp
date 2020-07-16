#include "info.h"
#include "ui_info.h"
#include <QtGui>
info::info(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::info)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint);
    QPixmap pix(":/resourec/img/SpbGUTelekom.png");
    ui->image2->setPixmap(pix);

}

info::~info()
{
    delete ui;
}

void info::on_info_clicked()
{
    this->close();
    emit infoWindow();
}
void info::mouseMoveEvent(QMouseEvent *e)
{
    if(myPos2.x()>=0 && e->buttons()&& Qt::LeftButton)
    {
        QPoint diff = e->pos()- myPos2;
        QPoint newpos = this->pos()+diff;
        this->move(newpos);
    }
}
void info::mousePressEvent(QMouseEvent *e)
{
    myPos2 = e->pos();
}
void info::mouseReleaseEvent(QMouseEvent *e)
{
    myPos2 = QPoint(-1,1);
}

void info::on_pushButton_clicked()
{
    close();
}

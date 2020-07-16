#include "info.h"
#include "ui_info.h"

info::info(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::info)
{
    ui->setupUi(this);
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

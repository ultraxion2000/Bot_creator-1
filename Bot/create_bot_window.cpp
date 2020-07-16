#include "create_bot_window.h"
#include "ui_create_bot_window.h"
#include <QtGui>
Create_bot_window::Create_bot_window(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Create_bot_window)
{
    ui->setupUi(this);

    QPixmap bkgnd(":/resourec/img/1579284620_32-89.jpg");
        bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
        QPalette palette;
        palette.setBrush(QPalette::Background, bkgnd);
        this->setPalette(palette);
      this->setWindowFlags(Qt::FramelessWindowHint);
}

Create_bot_window::~Create_bot_window()
{
    delete ui;
}

void Create_bot_window::on_CreateBotButton_clicked()
{
    this->close();
    emit menuW();
}

void Create_bot_window::on_comadLine_textEdited(const QString &arg1)
{  
  this->com = arg1;
}

void Create_bot_window::on_messLine_textEdited(const QString &arg1)
{
    this->mes = arg1;
}

void Create_bot_window::on_checkBox_5_stateChanged(int arg1)
{
    if (arg1 == 1)
        mes_permiss = true;
    else
      mes_permiss = false;
}

void Create_bot_window::on_AddMess_clicked()
{
    Creator::Func arg;
    arg.Command = com;
    arg.FuncName = "Mess";
    arg.permissions = mes_permiss;
    bot.add_in_list(arg);
    bot.set_message(mes);
}



void Create_bot_window::on_AddClear_clicked()
{
    Creator::Func arg;
    arg.Command = "Clear";
    arg.FuncName = "Clear";
    if(ui->checkBox->isChecked())
      {
        arg.permissions = true;
      }
    else
      {
        arg.permissions = false;
      }
    bot.add_in_list(arg);
}

void Create_bot_window::on_checkBox_4_stateChanged(int arg1)
{
  if(arg1 == 1)
    flip_permiss = true;
  else
    flip_permiss = false;
}

void Create_bot_window::on_AddFlip_clicked()
{
  Creator::Func arg;
  arg.Command = "flip";
  arg.FuncName = "flip";
  if(ui->checkBox->isChecked())
    {
      arg.permissions = true;
    }
  else
    {
      arg.permissions = false;
    }
  arg.permissions = flip_permiss;
  bot.add_in_list(arg);
}

void Create_bot_window::on_checkBox_3_stateChanged(int arg1)
{
  if(arg1 == 1)
    info_permiss = true;
  else
    info_permiss = false;
}

void Create_bot_window::on_AddInfo_clicked()
{
  Creator::Func arg;
  arg.Command = "info";
  arg.FuncName = "info";
  arg.permissions = info_permiss;
  bot.add_in_list(arg);
}

void Create_bot_window::on_checkBox_2_stateChanged(int arg1)
{
  if(arg1 == 1)
    melling_permiss = true;
  else
    melling_permiss = false;
}

void Create_bot_window::on_AddMassMelling_clicked()
{
  Creator::Func arg;
  arg.Command = com;
  arg.FuncName = "mass";
  arg.permissions = melling_permiss;
  bot.add_in_list(arg);
}

void Create_bot_window::on_checkBox_6_stateChanged(int arg1)
{
  if(arg1 == 1)
    game_permiss = true;
  else
    game_permiss = false;
}

void Create_bot_window::on_AddMafia_clicked()
{
  Creator::Func arg;
  arg.Command = "mafia";
  arg.FuncName = "mafia";
  arg.permissions = game_permiss;
  bot.add_in_list(arg);
}

void Create_bot_window::on_pushButton_clicked()
{
    QString Dir = QFileDialog::getOpenFileName(0, "Select dir", "");
    ui->dirLine->insert(Dir);
}

void Create_bot_window::on_CreateButton_clicked()
{
    bot.set_directory(ui->dirLine->text());
    bot.create_bot_file();
}

void Create_bot_window::mouseMoveEvent(QMouseEvent *e)
{
    if(myPos1.x()>=0 && e->buttons()&& Qt::LeftButton)
    {
        QPoint diff = e->pos()- myPos1;
        QPoint newpos = this->pos()+diff;
        this->move(newpos);
    }
}
void Create_bot_window::mousePressEvent(QMouseEvent *e)
{
    myPos1 = e->pos();
}
void Create_bot_window::mouseReleaseEvent(QMouseEvent *e)
{
    myPos1 = QPoint(-1,1);
}

void Create_bot_window::on_pushButton_2_clicked()
{
    close();
}



void Create_bot_window::on_Back_clicked()
{
    this->close();
    emit menuW();
}

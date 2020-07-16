#ifndef CREATE_BOT_WINDOW_H
#define CREATE_BOT_WINDOW_H

#include <QWidget>
#include<QFileDialog>
#include<creator.h>


namespace Ui {
class Create_bot_window;
}

class Create_bot_window : public QWidget
{
    Q_OBJECT

public:
    explicit Create_bot_window(QWidget *parent = nullptr);
    ~Create_bot_window();
signals:
    void menuW();


private slots:


    void mouseMoveEvent(QMouseEvent *);
    void mousePressEvent(QMouseEvent *);
    void mouseReleaseEvent(QMouseEvent *);


    void on_CreateBotButton_clicked();

    void on_AddMess_clicked();

    void on_comadLine_textEdited(const QString &arg1);

    void on_messLine_textEdited(const QString &arg1);

    void on_checkBox_5_stateChanged(int arg1);

    void on_AddClear_clicked();

    void on_checkBox_4_stateChanged(int arg1);

    void on_AddFlip_clicked();

    void on_checkBox_3_stateChanged(int arg1);

    void on_AddInfo_clicked();

    void on_checkBox_2_stateChanged(int arg1);

    void on_AddMassMelling_clicked();

    void on_checkBox_6_stateChanged(int arg1);

    void on_AddMafia_clicked();



    void on_pushButton_clicked();

    void on_CreateButton_clicked();

    void on_pushButton_2_clicked();



    void on_Back_clicked();

private:
    Ui::Create_bot_window *ui;
    QPoint myPos1;
    Creator bot;
    bool mes_permiss;
    bool clear_permiss;
    bool flip_permiss;
    bool info_permiss;
    bool melling_permiss;
    bool game_permiss;
    QString mes, com;

};

#endif // CREATE_BOT_WINDOW_H

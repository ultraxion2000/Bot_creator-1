#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <create_bot_window.h>
#include <info.h>

QT_BEGIN_NAMESPACE
namespace Ui
{
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();


private slots:
    void on_CreateBotButton_clicked();   
    void on_info_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_clicked();

    void mouseMoveEvent(QMouseEvent *);
    void mousePressEvent(QMouseEvent *);
    void mouseReleaseEvent(QMouseEvent *);


private:
    Ui::MainWindow *ui;
    QPoint myPos;
    Create_bot_window *CreateWindow1;
    info *Info;

};
#endif // MAINWINDOW_H

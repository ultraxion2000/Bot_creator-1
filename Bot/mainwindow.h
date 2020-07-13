#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <create_bot_window.h>

#include <QMainWindow>
#include <QTranslator>
#include <QEvent>

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

protected:
    // Метод получения событий в главном окне приложения
    // В нём будет производиться проверка события смены перевода приложения
    void changeEvent(QEvent * event) override;

private slots:
    void on_CreateBotButton_clicked();   
    void on_info_clicked();

private:
    Ui::MainWindow *ui;
    QTranslator qtLanguageTranslator;   // Выделяем перевод в отдельном поле, иначе ничего работать не будет
    Create_bot_window *CreateWindow;
    info *Info;
};
#endif // MAINWINDOW_H

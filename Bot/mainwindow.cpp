#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QApplication>
#include <QTranslator>
#include <QLibraryInfo>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent):
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    CreateWindow = new Create_bot_window();
    connect(CreateWindow, &Create_bot_window::menuW, this, &MainWindow::show);

    Info = new info();
    connect(Info, &info::infoWindow, this, &MainWindow::show);

    // Задаём два пункта с текстом локалей в комбобоксе
        ui->comboBox->addItems(QStringList() << "ru_RU" << "en_US");

        // подключаем к сигналу изменения пункта комбобокса лямбда функцию,
        // в которой будет изменяться перевод приложения
        // Здесь имеется интересный момент. Поскольку QComboBox имеет перегрузку сигнатуры сигнала,
        // то нам необходимо скастовать сигнал к нужной сигнатуре.
        // В данном случае будем использовать название пункта при его изменении
        connect(ui->comboBox, static_cast<void (QComboBox::*)(const QString &)>(&QComboBox::currentIndexChanged),
                [=](const QString &str){
            qtLanguageTranslator.load("QtLanguage_" + str, ".");   // Загружаем перевод
            qApp->installTranslator(&qtLanguageTranslator);        // Устанавливаем перевод в приложение
        });

        // Сделаем первоначальную инициализацию перевода для окна прилоежния
        qtLanguageTranslator.load(QString("QtLanguage_") + QString("ru_RU"));
        qApp->installTranslator(&qtLanguageTranslator);

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
void MainWindow::changeEvent(QEvent *event)
{
    // В случае получения события изменения языка приложения
    if (event->type() == QEvent::LanguageChange) {
        ui->retranslateUi(this);    // переведём окно заново
    }
}



void MainWindow::on_info_clicked()
{
    Info ->show();
    this->close();
}

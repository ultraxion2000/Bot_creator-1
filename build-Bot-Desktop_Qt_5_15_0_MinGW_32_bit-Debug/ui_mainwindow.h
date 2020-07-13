/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QComboBox *comboBox;
    QPushButton *info;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QLabel *label_2;
    QVBoxLayout *verticalLayout;
    QPushButton *CreateBotButton;
    QPushButton *EditBot;
    QPushButton *SettingsButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(427, 457);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color:qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(255, 235, 235, 206), stop:0.35 rgba(255, 188, 188, 80), stop:0.4 rgba(255, 162, 162, 80), stop:0.425 rgba(255, 132, 132, 156), stop:0.44 rgba(252, 128, 128, 80), stop:1 rgba(255, 255, 255, 0))\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"    background-color: red;\n"
"    border-style:outset ;\n"
"    border-width: 2px;\n"
"	 border-color: beige;\n"
"	padding: 2px;\n"
"}"));

        verticalLayout_2->addWidget(comboBox, 0, Qt::AlignRight);

        info = new QPushButton(centralwidget);
        info->setObjectName(QString::fromUtf8("info"));
        info->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    background-color: red;\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 5px;\n"
"    border-color: beige;\n"
"    font: bold 10px;\n"
"    min-width: 8em;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgb(255, 170, 0);\n"
"    border-style: inset;\n"
"}"));

        verticalLayout_2->addWidget(info, 0, Qt::AlignRight);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_2->addWidget(label);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout_2->addItem(verticalSpacer);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setTabletTracking(false);
        label_2->setContextMenuPolicy(Qt::DefaultContextMenu);
        label_2->setAcceptDrops(false);
        label_2->setToolTipDuration(5);
        label_2->setIndent(3);
        label_2->setOpenExternalLinks(false);

        verticalLayout_2->addWidget(label_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMaximumSize);
        verticalLayout->setContentsMargins(23, 10, 15, 2);
        CreateBotButton = new QPushButton(centralwidget);
        CreateBotButton->setObjectName(QString::fromUtf8("CreateBotButton"));
        CreateBotButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    background-color: red;\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: beige;\n"
"    font: bold 14px;\n"
"    min-width: 10em;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgb(255, 170, 0);\n"
"    border-style: inset;\n"
"}"));

        verticalLayout->addWidget(CreateBotButton);

        EditBot = new QPushButton(centralwidget);
        EditBot->setObjectName(QString::fromUtf8("EditBot"));
        EditBot->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    background-color: red;\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: beige;\n"
"    font: bold 14px;\n"
"    min-width: 10em;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgb(255, 170, 0);\n"
"    border-style: inset;\n"
"}"));

        verticalLayout->addWidget(EditBot);

        SettingsButton = new QPushButton(centralwidget);
        SettingsButton->setObjectName(QString::fromUtf8("SettingsButton"));
        SettingsButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    background-color: red;\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: beige;\n"
"    font: bold 14px;\n"
"    min-width: 10em;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgb(255, 170, 0);\n"
"    border-style: inset;\n"
"}"));

        verticalLayout->addWidget(SettingsButton);


        verticalLayout_2->addLayout(verticalLayout);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        info->setText(QCoreApplication::translate("MainWindow", "About the author", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">Bot Maker</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt;\">Main menu</span></p></body></html>", nullptr));
        CreateBotButton->setText(QCoreApplication::translate("MainWindow", "Create bot", nullptr));
        EditBot->setText(QCoreApplication::translate("MainWindow", "Edit bot", nullptr));
        SettingsButton->setText(QCoreApplication::translate("MainWindow", "Settings", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

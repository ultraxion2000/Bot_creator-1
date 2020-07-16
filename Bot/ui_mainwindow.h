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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
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
    QGridLayout *gridLayout_2;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QPushButton *info;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLabel *image;
    QGridLayout *gridLayout;
    QPushButton *SettingsButton;
    QPushButton *EditBot;
    QPushButton *CreateBotButton;
    QLabel *label_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(303, 399);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255)"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"    background-color: orange;\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-top-left-radius: 10px;\n"
"    border-color: beige;\n"
"    font: bold 10px;\n"
"    min-width: 10em;\n"
"    padding: 1px;\n"
"}"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(63, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 1, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QFont font;
        font.setFamily(QString::fromUtf8("HP Simplified"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/resourec/img/iSW70U3I1.png.jpg) 0 0 0 0 ;"));

        verticalLayout_2->addWidget(pushButton);


        gridLayout_2->addLayout(verticalLayout_2, 0, 2, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial Nova"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        pushButton_2->setFont(font1);
        pushButton_2->setStyleSheet(QString::fromUtf8("border-image: url(:/resourec/img/8.png) 0 0 0 0 ;"));

        verticalLayout->addWidget(pushButton_2);


        gridLayout_2->addLayout(verticalLayout, 0, 3, 1, 1);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        info = new QPushButton(groupBox);
        info->setObjectName(QString::fromUtf8("info"));
        info->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    background-color: orange;\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 5px;\n"
"    border-color: beige;\n"
"    font: bold 10px;\n"
"    min-width: 8em;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgb(255, 0, 0);\n"
"    border-style: inset;\n"
"}"));

        gridLayout_3->addWidget(info, 0, 0, 1, 1, Qt::AlignLeft);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        image = new QLabel(groupBox);
        image->setObjectName(QString::fromUtf8("image"));
        image->setPixmap(QPixmap(QString::fromUtf8("img/character-16-563887.png")));

        horizontalLayout->addWidget(image);


        gridLayout_3->addLayout(horizontalLayout, 1, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        SettingsButton = new QPushButton(groupBox);
        SettingsButton->setObjectName(QString::fromUtf8("SettingsButton"));
        SettingsButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    background-color: orange;\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: beige;\n"
"    font: bold 14px;\n"
"    min-width: 10em;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgb(255, 0, 0);\n"
"    border-style: inset;\n"
"}"));

        gridLayout->addWidget(SettingsButton, 6, 0, 1, 1);

        EditBot = new QPushButton(groupBox);
        EditBot->setObjectName(QString::fromUtf8("EditBot"));
        EditBot->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    background-color:orange ;\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: beige;\n"
"    font: bold 14px;\n"
"    min-width: 10em;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgb(255, 0, 0);\n"
"    border-style: inset;\n"
"}"));

        gridLayout->addWidget(EditBot, 4, 0, 1, 1);

        CreateBotButton = new QPushButton(groupBox);
        CreateBotButton->setObjectName(QString::fromUtf8("CreateBotButton"));
        CreateBotButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    background-color: orange;\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: beige;\n"
"    font: bold 14px;\n"
"    min-width: 10em;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgb(255, 0, 0);\n"
"    border-style: inset;\n"
"}"));

        gridLayout->addWidget(CreateBotButton, 3, 0, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setTabletTracking(false);
        label_2->setContextMenuPolicy(Qt::DefaultContextMenu);
        label_2->setAcceptDrops(false);
        label_2->setToolTipDuration(5);
        label_2->setIndent(3);
        label_2->setOpenExternalLinks(false);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout, 2, 0, 1, 1);


        gridLayout_2->addWidget(groupBox, 1, 0, 1, 4);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600;\">Menu</span></p></body></html>", nullptr));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        groupBox->setTitle(QString());
        info->setText(QCoreApplication::translate("MainWindow", "About the author", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt;\">	Bot Maker</span></p></body></html>", nullptr));
        image->setText(QString());
        SettingsButton->setText(QCoreApplication::translate("MainWindow", "Settings", nullptr));
        EditBot->setText(QCoreApplication::translate("MainWindow", "Edit bot", nullptr));
        CreateBotButton->setText(QCoreApplication::translate("MainWindow", "Create bot", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt;\">Main menu</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

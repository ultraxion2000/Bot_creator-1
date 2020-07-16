/********************************************************************************
** Form generated from reading UI file 'create_bot_window.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATE_BOT_WINDOW_H
#define UI_CREATE_BOT_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Create_bot_window
{
public:
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *checkBox_5;
    QPushButton *AddMess;
    QSpacerItem *horizontalSpacer_2;
    QGridLayout *gridLayout_9;
    QLabel *label_9;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *checkBox_6;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *AddMafia;
    QGridLayout *gridLayout_6;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *checkBox;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *AddClear;
    QLabel *label_5;
    QPushButton *CreateButton;
    QGridLayout *gridLayout_8;
    QLabel *label_10;
    QHBoxLayout *horizontalLayout_7;
    QLineEdit *dirLine;
    QSpacerItem *horizontalSpacer_11;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButton_2;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_5;
    QCheckBox *checkBox_4;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *AddFlip;
    QLabel *label_6;
    QGridLayout *gridLayout_5;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout_6;
    QCheckBox *checkBox_2;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *AddMassMelling;
    QGridLayout *gridLayout_7;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkBox_3;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *AddInfo;
    QVBoxLayout *verticalLayout;
    QPushButton *Back;
    QLabel *label_11;
    QGridLayout *gridLayout;
    QLabel *label_12;
    QLineEdit *BotsName;
    QLabel *label_13;
    QLineEdit *Token;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_14;
    QComboBox *comboBox;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QGridLayout *gridLayout_3;
    QLabel *label_3;
    QLineEdit *comadLine;
    QLabel *label_4;
    QLineEdit *messLine;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QWidget *Create_bot_window)
    {
        if (Create_bot_window->objectName().isEmpty())
            Create_bot_window->setObjectName(QString::fromUtf8("Create_bot_window"));
        Create_bot_window->resize(572, 686);
        Create_bot_window->setAcceptDrops(true);
        Create_bot_window->setAutoFillBackground(false);
        Create_bot_window->setStyleSheet(QString::fromUtf8("border-image: url(:/resourec/img/1579284620_32-89.jpg) 0 0 0 0 ;"));
        gridLayout_2 = new QGridLayout(Create_bot_window);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_2 = new QLabel(Create_bot_window);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setFamily(QString::fromUtf8("Sitka Banner"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("border-image:rgb(255, 255, 255)"));

        gridLayout_2->addWidget(label_2, 3, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        checkBox_5 = new QCheckBox(Create_bot_window);
        checkBox_5->setObjectName(QString::fromUtf8("checkBox_5"));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(120, 120, 120, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        checkBox_5->setPalette(palette);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Sitka Text"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        checkBox_5->setFont(font1);
        checkBox_5->setFocusPolicy(Qt::TabFocus);
        checkBox_5->setStyleSheet(QString::fromUtf8("border-image:rgb(255, 255, 255)"));

        horizontalLayout_4->addWidget(checkBox_5);

        AddMess = new QPushButton(Create_bot_window);
        AddMess->setObjectName(QString::fromUtf8("AddMess"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Palatino Linotype"));
        font2.setPointSize(10);
        AddMess->setFont(font2);
        AddMess->setStyleSheet(QString::fromUtf8("border-image: url(:/resourec/img/add.png) 4 2 2 2;"));

        horizontalLayout_4->addWidget(AddMess);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        gridLayout_2->addLayout(horizontalLayout_4, 6, 0, 1, 1);

        gridLayout_9 = new QGridLayout();
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        label_9 = new QLabel(Create_bot_window);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Sitka Banner"));
        font3.setPointSize(11);
        font3.setBold(true);
        font3.setWeight(75);
        label_9->setFont(font3);
        label_9->setStyleSheet(QString::fromUtf8("border-image: url(:) 0 0 0 0;\n"
"background-color:rgb(170, 0, 0);\n"
"\n"
" border-top-left-radius: 20px;"));

        gridLayout_9->addWidget(label_9, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        checkBox_6 = new QCheckBox(Create_bot_window);
        checkBox_6->setObjectName(QString::fromUtf8("checkBox_6"));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Sitka Text"));
        font4.setPointSize(10);
        font4.setBold(true);
        font4.setItalic(false);
        font4.setWeight(75);
        checkBox_6->setFont(font4);
        checkBox_6->setStyleSheet(QString::fromUtf8("border-image:rgb(255, 255, 255)"));

        horizontalLayout_3->addWidget(checkBox_6);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);

        AddMafia = new QPushButton(Create_bot_window);
        AddMafia->setObjectName(QString::fromUtf8("AddMafia"));
        QFont font5;
        font5.setPointSize(12);
        AddMafia->setFont(font5);
        AddMafia->setStyleSheet(QString::fromUtf8("border-image: url(:/resourec/img/add.png) 4 2 2 2;"));

        horizontalLayout_3->addWidget(AddMafia);


        gridLayout_9->addLayout(horizontalLayout_3, 1, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout_9, 10, 0, 1, 1);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, -1, -1);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        checkBox = new QCheckBox(Create_bot_window);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        QPalette palette1;
        checkBox->setPalette(palette1);
        checkBox->setFont(font1);
        checkBox->setStyleSheet(QString::fromUtf8("border-image:rgb(255, 255, 255)"));

        horizontalLayout_2->addWidget(checkBox);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        AddClear = new QPushButton(Create_bot_window);
        AddClear->setObjectName(QString::fromUtf8("AddClear"));
        AddClear->setFont(font5);
        AddClear->setStyleSheet(QString::fromUtf8("border-image: url(:/resourec/img/add.png) 4 2 2 2;"));

        horizontalLayout_2->addWidget(AddClear);


        gridLayout_6->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        label_5 = new QLabel(Create_bot_window);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font3);
        label_5->setStyleSheet(QString::fromUtf8("border-image: url(:) 0 0 0 0;\n"
"background-color:rgb(170, 0, 0);\n"
"\n"
" border-top-left-radius: 20px;"));

        gridLayout_6->addWidget(label_5, 0, 0, 2, 1);


        gridLayout_2->addLayout(gridLayout_6, 8, 0, 1, 1);

        CreateButton = new QPushButton(Create_bot_window);
        CreateButton->setObjectName(QString::fromUtf8("CreateButton"));
        QFont font6;
        font6.setFamily(QString::fromUtf8("Arial Nova"));
        font6.setPointSize(14);
        font6.setBold(true);
        font6.setWeight(75);
        CreateButton->setFont(font6);
        CreateButton->setStyleSheet(QString::fromUtf8("border-image: url(:/resourec/img/kisspng-clip-art-portable-network-graphics-computer-icons-our-process-1-24x1-5d2368e39b6c10.6861182015626016996366.jpg);"));

        gridLayout_2->addWidget(CreateButton, 14, 3, 1, 1);

        gridLayout_8 = new QGridLayout();
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        label_10 = new QLabel(Create_bot_window);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font3);
        label_10->setStyleSheet(QString::fromUtf8("border-image: url(:) 0 0 0 0;\n"
"background-color:rgb(170, 0, 0);\n"
"\n"
" border-top-right-radius: 20px;"));

        gridLayout_8->addWidget(label_10, 0, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        dirLine = new QLineEdit(Create_bot_window);
        dirLine->setObjectName(QString::fromUtf8("dirLine"));
        dirLine->setStyleSheet(QString::fromUtf8("border-image:rgb(255, 255, 255)"));
        dirLine->setReadOnly(true);

        horizontalLayout_7->addWidget(dirLine);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_11);

        pushButton = new QPushButton(Create_bot_window);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QFont font7;
        font7.setPointSize(14);
        pushButton->setFont(font7);
        pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/resourec/img/kisspng-logo-brand-font-forward-button-5b29b23921a2a6.1743000215294592571378.jpg) 0 0 0 0;"));

        horizontalLayout_7->addWidget(pushButton);


        gridLayout_8->addLayout(horizontalLayout_7, 1, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout_8, 10, 2, 1, 2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 12, 3, 1, 1);

        pushButton_2 = new QPushButton(Create_bot_window);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        QFont font8;
        font8.setFamily(QString::fromUtf8("Arial Nova"));
        font8.setPointSize(18);
        font8.setBold(false);
        font8.setWeight(50);
        pushButton_2->setFont(font8);
        pushButton_2->setStyleSheet(QString::fromUtf8("border-image: url(:/resourec/img/8.png) 0 0 0 0 ;"));

        gridLayout_2->addWidget(pushButton_2, 14, 0, 1, 1, Qt::AlignLeft);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        checkBox_4 = new QCheckBox(Create_bot_window);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));
        checkBox_4->setFont(font1);
        checkBox_4->setStyleSheet(QString::fromUtf8("border-image:rgb(255, 255, 255)"));

        horizontalLayout_5->addWidget(checkBox_4);

        horizontalSpacer_4 = new QSpacerItem(42, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        AddFlip = new QPushButton(Create_bot_window);
        AddFlip->setObjectName(QString::fromUtf8("AddFlip"));
        AddFlip->setFont(font5);
        AddFlip->setStyleSheet(QString::fromUtf8("border-image: url(:/resourec/img/add.png) 4 2 2 2;"));

        horizontalLayout_5->addWidget(AddFlip);


        gridLayout_4->addLayout(horizontalLayout_5, 1, 0, 1, 1);

        label_6 = new QLabel(Create_bot_window);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font3);
        label_6->setStyleSheet(QString::fromUtf8("border-image: url(:) 0 0 0 0;\n"
"background-color:rgb(170, 0, 0);\n"
"\n"
" border-top-right-radius: 20px;"));

        gridLayout_4->addWidget(label_6, 0, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout_4, 8, 2, 1, 2);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_8 = new QLabel(Create_bot_window);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font3);
        label_8->setStyleSheet(QString::fromUtf8("border-image: url(:) 0 0 0 0;\n"
"background-color:rgb(170, 0, 0);\n"
"\n"
" border-top-right-radius: 20px;"));

        gridLayout_5->addWidget(label_8, 0, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        checkBox_2 = new QCheckBox(Create_bot_window);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setFont(font1);
        checkBox_2->setStyleSheet(QString::fromUtf8("border-image:rgb(255, 255, 255)"));

        horizontalLayout_6->addWidget(checkBox_2);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);

        AddMassMelling = new QPushButton(Create_bot_window);
        AddMassMelling->setObjectName(QString::fromUtf8("AddMassMelling"));
        AddMassMelling->setFont(font5);
        AddMassMelling->setStyleSheet(QString::fromUtf8("border-image: url(:/resourec/img/add.png) 4 2 2 2;"));

        horizontalLayout_6->addWidget(AddMassMelling);


        gridLayout_5->addLayout(horizontalLayout_6, 1, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout_5, 9, 2, 1, 2);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        label_7 = new QLabel(Create_bot_window);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font3);
        label_7->setStyleSheet(QString::fromUtf8("border-image: url(:) 0 0 0 0;\n"
"background-color:rgb(170, 0, 0);\n"
"\n"
" border-top-left-radius: 20px;"));

        gridLayout_7->addWidget(label_7, 0, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        checkBox_3 = new QCheckBox(Create_bot_window);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));
        checkBox_3->setFont(font1);
        checkBox_3->setStyleSheet(QString::fromUtf8("border-image:rgb(255, 255, 255)"));

        horizontalLayout->addWidget(checkBox_3);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        AddInfo = new QPushButton(Create_bot_window);
        AddInfo->setObjectName(QString::fromUtf8("AddInfo"));
        AddInfo->setFont(font5);
        AddInfo->setStyleSheet(QString::fromUtf8("border-image: url(:/resourec/img/add.png) 4 2 2 2;"));

        horizontalLayout->addWidget(AddInfo);


        gridLayout_7->addLayout(horizontalLayout, 1, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout_7, 9, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        Back = new QPushButton(Create_bot_window);
        Back->setObjectName(QString::fromUtf8("Back"));
        QFont font9;
        font9.setPointSize(18);
        Back->setFont(font9);
        Back->setStyleSheet(QString::fromUtf8("border-image: url(:/resourec/img/blue-arrow-75.png)"));

        verticalLayout->addWidget(Back, 0, Qt::AlignLeft);

        label_11 = new QLabel(Create_bot_window);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        QFont font10;
        font10.setFamily(QString::fromUtf8("Comic Sans MS"));
        font10.setPointSize(14);
        font10.setBold(true);
        font10.setItalic(false);
        font10.setWeight(75);
        label_11->setFont(font10);
        label_11->setStyleSheet(QString::fromUtf8("border-image: url(:) 0 0 0 0;\n"
""));

        verticalLayout->addWidget(label_11);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_12 = new QLabel(Create_bot_window);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        QFont font11;
        font11.setFamily(QString::fromUtf8("Sitka Text"));
        label_12->setFont(font11);
        label_12->setStyleSheet(QString::fromUtf8("border-image: url(:) 0 0 0 0;\n"
"background-color:rgb(170, 0, 0);\n"
"\n"
" border-top-left-radius: 15px;"));

        gridLayout->addWidget(label_12, 0, 0, 1, 1);

        BotsName = new QLineEdit(Create_bot_window);
        BotsName->setObjectName(QString::fromUtf8("BotsName"));
        BotsName->setStyleSheet(QString::fromUtf8("border-image:rgb(255, 255, 255)"));

        gridLayout->addWidget(BotsName, 0, 1, 1, 1);

        label_13 = new QLabel(Create_bot_window);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setFont(font11);
        label_13->setStyleSheet(QString::fromUtf8("border-image: url(:) 0 0 0 0;\n"
"background-color:rgb(170, 0, 0);\n"
"\n"
" border-top-left-radius: 15px;"));

        gridLayout->addWidget(label_13, 1, 0, 1, 1);

        Token = new QLineEdit(Create_bot_window);
        Token->setObjectName(QString::fromUtf8("Token"));
        Token->setStyleSheet(QString::fromUtf8("border-image:rgb(255, 255, 255)"));

        gridLayout->addWidget(Token, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 5);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_14 = new QLabel(Create_bot_window);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setFont(font11);
        label_14->setStyleSheet(QString::fromUtf8("border-image: url(:) 0 0 0 0;\n"
""));

        horizontalLayout_8->addWidget(label_14);

        comboBox = new QComboBox(Create_bot_window);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"    border-image: url(:/resourec/img/i2X0SOGNC.jpg) 0 0 0 0;\n"
"	background-color: orange;\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: beige;\n"
"    font: bold 14px;\n"
"    min-width: 10em;\n"
"    padding: 6px;\n"
"}\n"
"QComboBox:pressed {\n"
"    background-color: rgb(255, 0, 0);\n"
"    border-style: inset;\n"
"}"));

        horizontalLayout_8->addWidget(comboBox, 0, Qt::AlignRight);


        gridLayout_2->addLayout(horizontalLayout_8, 1, 0, 1, 5);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 6, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 14, 2, 1, 1);

        label = new QLabel(Create_bot_window);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font12;
        font12.setFamily(QString::fromUtf8("Sitka Heading"));
        font12.setPointSize(14);
        font12.setBold(true);
        font12.setWeight(75);
        label->setFont(font12);
        label->setStyleSheet(QString::fromUtf8("border-image:rgb(255, 255, 255)"));

        gridLayout_2->addWidget(label, 2, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_3 = new QLabel(Create_bot_window);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font11);
        label_3->setStyleSheet(QString::fromUtf8("border-image: url(:) 0 0 0 0;\n"
"background-color:rgb(170, 0, 0);\n"
"\n"
" border-top-left-radius: 15px;"));

        gridLayout_3->addWidget(label_3, 0, 0, 1, 1);

        comadLine = new QLineEdit(Create_bot_window);
        comadLine->setObjectName(QString::fromUtf8("comadLine"));
        comadLine->setStyleSheet(QString::fromUtf8("border-image:rgb(255, 255, 255)"));

        gridLayout_3->addWidget(comadLine, 0, 1, 1, 1);

        label_4 = new QLabel(Create_bot_window);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setFont(font11);
        label_4->setStyleSheet(QString::fromUtf8("border-image: url(:) 0 0 0 0;\n"
"background-color:rgb(170, 0, 0);\n"
"\n"
" border-top-left-radius: 15px;"));
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout_3->addWidget(label_4, 1, 0, 1, 1);

        messLine = new QLineEdit(Create_bot_window);
        messLine->setObjectName(QString::fromUtf8("messLine"));
        messLine->setStyleSheet(QString::fromUtf8("border-image:rgb(255, 255, 255)"));

        gridLayout_3->addWidget(messLine, 1, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout_3, 4, 0, 1, 4);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_3, 13, 0, 1, 1);


        retranslateUi(Create_bot_window);

        QMetaObject::connectSlotsByName(Create_bot_window);
    } // setupUi

    void retranslateUi(QWidget *Create_bot_window)
    {
        Create_bot_window->setWindowTitle(QCoreApplication::translate("Create_bot_window", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("Create_bot_window", "<html><head/><body><p><span style=\" color:#000000;\">Message in response to the command</span></p></body></html>", nullptr));
        checkBox_5->setText(QCoreApplication::translate("Create_bot_window", "Only for admin", nullptr));
        AddMess->setText(QString());
        label_9->setText(QCoreApplication::translate("Create_bot_window", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; color:#ffff00;\">Mafia game</span></p></body></html>", nullptr));
        checkBox_6->setText(QCoreApplication::translate("Create_bot_window", "Only for admin", nullptr));
        AddMafia->setText(QString());
        checkBox->setText(QCoreApplication::translate("Create_bot_window", "Only for admin", nullptr));
        AddClear->setText(QString());
        label_5->setText(QCoreApplication::translate("Create_bot_window", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; color:#ffff00;\">Clear the chat</span></p></body></html>", nullptr));
        CreateButton->setText(QString());
        label_10->setText(QCoreApplication::translate("Create_bot_window", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; color:#ffff00;\">Set a directory</span></p></body></html>", nullptr));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        checkBox_4->setText(QCoreApplication::translate("Create_bot_window", "Only for admin", nullptr));
        AddFlip->setText(QString());
        label_6->setText(QCoreApplication::translate("Create_bot_window", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; color:#ffff00;\">Flip the money</span></p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("Create_bot_window", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; color:#ffff00;\">Mass mailing</span></p></body></html>", nullptr));
        checkBox_2->setText(QCoreApplication::translate("Create_bot_window", "Only for admin", nullptr));
        AddMassMelling->setText(QString());
        label_7->setText(QCoreApplication::translate("Create_bot_window", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; color:#ffff00;\">Message with user's info</span></p></body></html>", nullptr));
        checkBox_3->setText(QCoreApplication::translate("Create_bot_window", "Only for admin", nullptr));
        AddInfo->setText(QString());
        Back->setText(QString());
        label_11->setText(QCoreApplication::translate("Create_bot_window", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt; font-weight:600; color:#000000;\">Bot Info</span></p></body></html>", nullptr));
        label_12->setText(QCoreApplication::translate("Create_bot_window", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; color:#ffff00;\">Bot's name</span></p></body></html>", nullptr));
        label_13->setText(QCoreApplication::translate("Create_bot_window", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; color:#ffff00;\">Token</span></p></body></html>", nullptr));
        label_14->setText(QCoreApplication::translate("Create_bot_window", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; color:#ffff00;\">Prefix</span></p></body></html>", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("Create_bot_window", "Select prefix", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("Create_bot_window", "/", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("Create_bot_window", ".", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("Create_bot_window", "\\", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("Create_bot_window", ",", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("Create_bot_window", "*", nullptr));

        label->setText(QCoreApplication::translate("Create_bot_window", "<html><head/><body><p><span style=\" color:#000000;\">Functions</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("Create_bot_window", "<html><head/><body><p align=\"center\"><span style=\" font-size:9pt; font-weight:600; color:#ffff00;\">Command</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("Create_bot_window", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt; font-weight:600; color:#ffff00;\">Message</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Create_bot_window: public Ui_Create_bot_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATE_BOT_WINDOW_H

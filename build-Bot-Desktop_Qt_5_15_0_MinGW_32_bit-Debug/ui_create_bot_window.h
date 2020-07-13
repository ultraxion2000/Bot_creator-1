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
#include <QtWidgets/QFormLayout>
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
    QVBoxLayout *verticalLayout_13;
    QVBoxLayout *verticalLayout_12;
    QLabel *label_11;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_12;
    QLineEdit *BotsName;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_13;
    QLineEdit *Token;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_14;
    QComboBox *comboBox;
    QVBoxLayout *verticalLayout_11;
    QLabel *label;
    QVBoxLayout *verticalLayout_9;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *comadLine;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_4;
    QLineEdit *messLine;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *checkBox_5;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *AddMess;
    QFormLayout *formLayout;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *checkBox;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *AddClear;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_5;
    QCheckBox *checkBox_4;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *AddFlip;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_6;
    QCheckBox *checkBox_3;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *AddInfo;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout_7;
    QCheckBox *checkBox_2;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *AddMassMelling;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_9;
    QHBoxLayout *horizontalLayout_8;
    QCheckBox *checkBox_6;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *AddMafia;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_10;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *dirLine;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_8;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer;
    QPushButton *CreateButton;

    void setupUi(QWidget *Create_bot_window)
    {
        if (Create_bot_window->objectName().isEmpty())
            Create_bot_window->setObjectName(QString::fromUtf8("Create_bot_window"));
        Create_bot_window->resize(576, 533);
        Create_bot_window->setAcceptDrops(true);
        verticalLayout_13 = new QVBoxLayout(Create_bot_window);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        label_11 = new QLabel(Create_bot_window);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        QFont font;
        font.setFamily(QString::fromUtf8("Sitka Heading"));
        font.setPointSize(14);
        font.setBold(false);
        font.setWeight(50);
        label_11->setFont(font);

        verticalLayout_12->addWidget(label_11);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_12 = new QLabel(Create_bot_window);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Sitka Text"));
        label_12->setFont(font1);

        horizontalLayout_11->addWidget(label_12);

        BotsName = new QLineEdit(Create_bot_window);
        BotsName->setObjectName(QString::fromUtf8("BotsName"));

        horizontalLayout_11->addWidget(BotsName);


        verticalLayout_10->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(32);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_13 = new QLabel(Create_bot_window);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setFont(font1);

        horizontalLayout_12->addWidget(label_13);

        Token = new QLineEdit(Create_bot_window);
        Token->setObjectName(QString::fromUtf8("Token"));

        horizontalLayout_12->addWidget(Token);


        verticalLayout_10->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label_14 = new QLabel(Create_bot_window);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setFont(font1);

        horizontalLayout_13->addWidget(label_14);

        comboBox = new QComboBox(Create_bot_window);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout_13->addWidget(comboBox);


        verticalLayout_10->addLayout(horizontalLayout_13);


        verticalLayout_12->addLayout(verticalLayout_10);


        verticalLayout_13->addLayout(verticalLayout_12);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        label = new QLabel(Create_bot_window);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Sitka Heading"));
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setWeight(75);
        label->setFont(font2);

        verticalLayout_11->addWidget(label);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(12);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(12);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        label_2 = new QLabel(Create_bot_window);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Sitka Banner"));
        font3.setPointSize(11);
        font3.setBold(true);
        font3.setWeight(75);
        label_2->setFont(font3);

        verticalLayout_8->addWidget(label_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(20);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(Create_bot_window);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);

        horizontalLayout->addWidget(label_3);

        comadLine = new QLineEdit(Create_bot_window);
        comadLine->setObjectName(QString::fromUtf8("comadLine"));

        horizontalLayout->addWidget(comadLine);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_4 = new QLabel(Create_bot_window);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        horizontalLayout_10->addWidget(label_4);

        messLine = new QLineEdit(Create_bot_window);
        messLine->setObjectName(QString::fromUtf8("messLine"));

        horizontalLayout_10->addWidget(messLine);


        verticalLayout->addLayout(horizontalLayout_10);


        verticalLayout_8->addLayout(verticalLayout);


        verticalLayout_9->addLayout(verticalLayout_8);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        checkBox_5 = new QCheckBox(Create_bot_window);
        checkBox_5->setObjectName(QString::fromUtf8("checkBox_5"));
        checkBox_5->setFont(font1);

        horizontalLayout_4->addWidget(checkBox_5);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        AddMess = new QPushButton(Create_bot_window);
        AddMess->setObjectName(QString::fromUtf8("AddMess"));

        horizontalLayout_4->addWidget(AddMess);


        verticalLayout_9->addLayout(horizontalLayout_4);


        verticalLayout_11->addLayout(verticalLayout_9);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_5 = new QLabel(Create_bot_window);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font3);

        verticalLayout_3->addWidget(label_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        checkBox = new QCheckBox(Create_bot_window);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setFont(font1);

        horizontalLayout_3->addWidget(checkBox);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        AddClear = new QPushButton(Create_bot_window);
        AddClear->setObjectName(QString::fromUtf8("AddClear"));

        horizontalLayout_3->addWidget(AddClear);


        verticalLayout_3->addLayout(horizontalLayout_3);


        formLayout->setLayout(0, QFormLayout::LabelRole, verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_6 = new QLabel(Create_bot_window);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font3);

        verticalLayout_4->addWidget(label_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        checkBox_4 = new QCheckBox(Create_bot_window);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));
        checkBox_4->setFont(font1);

        horizontalLayout_5->addWidget(checkBox_4);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        AddFlip = new QPushButton(Create_bot_window);
        AddFlip->setObjectName(QString::fromUtf8("AddFlip"));

        horizontalLayout_5->addWidget(AddFlip);


        verticalLayout_4->addLayout(horizontalLayout_5);


        formLayout->setLayout(0, QFormLayout::FieldRole, verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_7 = new QLabel(Create_bot_window);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font3);

        verticalLayout_5->addWidget(label_7);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        checkBox_3 = new QCheckBox(Create_bot_window);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));
        checkBox_3->setFont(font1);

        horizontalLayout_6->addWidget(checkBox_3);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_5);

        AddInfo = new QPushButton(Create_bot_window);
        AddInfo->setObjectName(QString::fromUtf8("AddInfo"));

        horizontalLayout_6->addWidget(AddInfo);


        verticalLayout_5->addLayout(horizontalLayout_6);


        formLayout->setLayout(1, QFormLayout::LabelRole, verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_8 = new QLabel(Create_bot_window);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font3);

        verticalLayout_6->addWidget(label_8);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        checkBox_2 = new QCheckBox(Create_bot_window);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setFont(font1);

        horizontalLayout_7->addWidget(checkBox_2);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_6);

        AddMassMelling = new QPushButton(Create_bot_window);
        AddMassMelling->setObjectName(QString::fromUtf8("AddMassMelling"));

        horizontalLayout_7->addWidget(AddMassMelling);


        verticalLayout_6->addLayout(horizontalLayout_7);


        formLayout->setLayout(1, QFormLayout::FieldRole, verticalLayout_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        label_9 = new QLabel(Create_bot_window);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font3);

        verticalLayout_7->addWidget(label_9);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        checkBox_6 = new QCheckBox(Create_bot_window);
        checkBox_6->setObjectName(QString::fromUtf8("checkBox_6"));
        checkBox_6->setFont(font1);

        horizontalLayout_8->addWidget(checkBox_6);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_7);

        AddMafia = new QPushButton(Create_bot_window);
        AddMafia->setObjectName(QString::fromUtf8("AddMafia"));

        horizontalLayout_8->addWidget(AddMafia);


        verticalLayout_7->addLayout(horizontalLayout_8);


        formLayout->setLayout(2, QFormLayout::LabelRole, verticalLayout_7);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_10 = new QLabel(Create_bot_window);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font3);

        verticalLayout_2->addWidget(label_10);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        dirLine = new QLineEdit(Create_bot_window);
        dirLine->setObjectName(QString::fromUtf8("dirLine"));
        dirLine->setReadOnly(true);

        horizontalLayout_2->addWidget(dirLine);

        pushButton = new QPushButton(Create_bot_window);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_2->addWidget(pushButton);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_8);


        verticalLayout_2->addLayout(horizontalLayout_2);


        formLayout->setLayout(2, QFormLayout::FieldRole, verticalLayout_2);


        verticalLayout_11->addLayout(formLayout);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer);

        CreateButton = new QPushButton(Create_bot_window);
        CreateButton->setObjectName(QString::fromUtf8("CreateButton"));

        horizontalLayout_9->addWidget(CreateButton);


        verticalLayout_11->addLayout(horizontalLayout_9);


        verticalLayout_13->addLayout(verticalLayout_11);


        retranslateUi(Create_bot_window);

        QMetaObject::connectSlotsByName(Create_bot_window);
    } // setupUi

    void retranslateUi(QWidget *Create_bot_window)
    {
        Create_bot_window->setWindowTitle(QCoreApplication::translate("Create_bot_window", "Form", nullptr));
        label_11->setText(QCoreApplication::translate("Create_bot_window", "Bot Info", nullptr));
        label_12->setText(QCoreApplication::translate("Create_bot_window", "Bot's name", nullptr));
        label_13->setText(QCoreApplication::translate("Create_bot_window", "Token", nullptr));
        label_14->setText(QCoreApplication::translate("Create_bot_window", "Prefix", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("Create_bot_window", "Select prefix", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("Create_bot_window", "/", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("Create_bot_window", ".", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("Create_bot_window", "\\", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("Create_bot_window", ",", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("Create_bot_window", "*", nullptr));

        label->setText(QCoreApplication::translate("Create_bot_window", "Functions", nullptr));
        label_2->setText(QCoreApplication::translate("Create_bot_window", "Message in response to the command", nullptr));
        label_3->setText(QCoreApplication::translate("Create_bot_window", "Command", nullptr));
        label_4->setText(QCoreApplication::translate("Create_bot_window", "Message", nullptr));
        checkBox_5->setText(QCoreApplication::translate("Create_bot_window", "Only for admin", nullptr));
        AddMess->setText(QCoreApplication::translate("Create_bot_window", "Add", nullptr));
        label_5->setText(QCoreApplication::translate("Create_bot_window", "Clear the chat", nullptr));
        checkBox->setText(QCoreApplication::translate("Create_bot_window", "Only for admin", nullptr));
        AddClear->setText(QCoreApplication::translate("Create_bot_window", "Add", nullptr));
        label_6->setText(QCoreApplication::translate("Create_bot_window", "Flip the money", nullptr));
        checkBox_4->setText(QCoreApplication::translate("Create_bot_window", "Only for admin", nullptr));
        AddFlip->setText(QCoreApplication::translate("Create_bot_window", "Add", nullptr));
        label_7->setText(QCoreApplication::translate("Create_bot_window", "Message with user's info", nullptr));
        checkBox_3->setText(QCoreApplication::translate("Create_bot_window", "Only for admin", nullptr));
        AddInfo->setText(QCoreApplication::translate("Create_bot_window", "Add", nullptr));
        label_8->setText(QCoreApplication::translate("Create_bot_window", "Mass mailing", nullptr));
        checkBox_2->setText(QCoreApplication::translate("Create_bot_window", "Only for admin", nullptr));
        AddMassMelling->setText(QCoreApplication::translate("Create_bot_window", "Add", nullptr));
        label_9->setText(QCoreApplication::translate("Create_bot_window", "Mafia game", nullptr));
        checkBox_6->setText(QCoreApplication::translate("Create_bot_window", "Only for admin", nullptr));
        AddMafia->setText(QCoreApplication::translate("Create_bot_window", "Add", nullptr));
        label_10->setText(QCoreApplication::translate("Create_bot_window", "Set a directory", nullptr));
        pushButton->setText(QCoreApplication::translate("Create_bot_window", "select dir", nullptr));
        CreateButton->setText(QCoreApplication::translate("Create_bot_window", "Create", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Create_bot_window: public Ui_Create_bot_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATE_BOT_WINDOW_H

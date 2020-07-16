/********************************************************************************
** Form generated from reading UI file 'info.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFO_H
#define UI_INFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_info
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QPushButton *pushButton;
    QVBoxLayout *verticalLayout;
    QLabel *image2;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *info)
    {
        if (info->objectName().isEmpty())
            info->setObjectName(QString::fromUtf8("info"));
        info->resize(937, 613);
        info->setStyleSheet(QString::fromUtf8("background-color:rgb(245, 245, 245)"));
        gridLayout = new QGridLayout(info);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(info);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial Nova"));
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        label->setFont(font);
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

        horizontalLayout->addWidget(label, 0, Qt::AlignLeft);

        pushButton = new QPushButton(info);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QFont font1;
        font1.setPointSize(14);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/resourec/img/8.png) 0 0 0 0 ;"));

        horizontalLayout->addWidget(pushButton, 0, Qt::AlignRight);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        image2 = new QLabel(info);
        image2->setObjectName(QString::fromUtf8("image2"));
        image2->setMaximumSize(QSize(918, 299));
        image2->setPixmap(QPixmap(QString::fromUtf8("img/SpbGUTelekom.png")));

        verticalLayout->addWidget(image2);

        textBrowser = new QTextBrowser(info);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Georgia Pro Semibold"));
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setItalic(false);
        font2.setWeight(75);
        textBrowser->setFont(font2);
        textBrowser->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 85, 0)"));

        verticalLayout->addWidget(textBrowser);


        gridLayout->addLayout(verticalLayout, 1, 0, 1, 1);


        retranslateUi(info);

        QMetaObject::connectSlotsByName(info);
    } // setupUi

    void retranslateUi(QDialog *info)
    {
        info->setWindowTitle(QCoreApplication::translate("info", "Info", nullptr));
        label->setText(QCoreApplication::translate("info", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-style:italic;\">\320\236\320\261 \320\260\320\262\321\202\320\276\321\200\320\260\321\205</span></p></body></html>", nullptr));
        pushButton->setText(QString());
        image2->setText(QString());
        textBrowser->setHtml(QCoreApplication::translate("info", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Georgia Pro Semibold'; font-size:10pt; font-weight:600; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:18pt; font-weight:400; color:#ffffff;\">\320\240\320\260\320\261\320\276\321\202\321\203 \320\262\321\213\320\277\320\276\320\273\320\275\320\270\320\273\320\270 \321\201\321\202\321\203\320\264\320\265\320\275\321\202\321\213 \320\263\321"
                        "\200\321\203\320\277\320\277\321\213 \320\230\320\232\320\237\320\230-83</span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:18pt; font-weight:400; color:#ffffff;\">\320\221\320\265\320\267\320\276\320\261\321\200\320\260\320\267\320\276\320\262 \320\220\320\273\320\265\320\272\321\201\320\260\320\275\320\264\321\200</span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:18pt; font-weight:400; color:#ffffff;\">\320\223\320\265\321\200\320\260\321\201\320\270\320\274\320\276\320\262 \320\234\320\270\321\205\320\260\320\270\320\273 </span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class info: public Ui_info {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFO_H

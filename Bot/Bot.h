#pragma once
#include <iostream>
#include<QString>
using namespace std;

class Bot
{
private:
    QString Name;  //Bot's name
    QString Token; //Bot's token
    QChar Prefix;  //Bot's commands prefix
public:
    Bot();
    void set_name(QString name);      //Set bot's name
    void set_token(QString token);    //Set bot's token
    void set_prefix(QChar prefix);    //Set bot's commands prefix
    QString get_name();               //Return bot's name
    QString get_token();              //Return bot's token
    QChar get_prefix();               //Return bot's commands prefix
};

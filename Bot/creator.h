#pragma once
#include<iostream>
#include<Bot.h>
#include<vector>
#include<QString>
#include<QFile>
using namespace std;

class Creator
{
public:
    Creator()=default;
    Creator(const QString Name, const QString token, QChar prefix)
    {
      bot.set_name(Name);
      bot.set_token(token);
      bot.set_prefix(prefix);
    }
    struct Func
    {
      QString FuncName;
      QString Command;
      bool permissions;
    };
    void set_directory(QString dir);
    void set_func_list(vector<Func> List);
    void add_in_list(Func arg);
    void set_message(QString mess);
    QString get_directory();
    void create_bot_file();
    vector<Func> get_func_list();
private:
    Bot bot;
    vector<Func> FuncList;
    QString directory;
    QString message;
};

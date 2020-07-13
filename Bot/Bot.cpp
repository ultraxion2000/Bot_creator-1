#include <iostream>
#include "Bot.h"
using namespace std;


Bot::Bot() : Name("bot"),Token("token"),Prefix('.')
{
}

void Bot::set_name(QString name)     //Set bot's name
{
    Bot::Name = name;
}
void Bot::set_token(QString token)   //Set bot's token
{
    Bot::Token = token;
}
void Bot::set_prefix(QChar prefix)   //Set bot's commands prefix
{
    Bot::Prefix = prefix;
}
QString Bot::get_name()  //Return bot's name
{
    return Bot::Name;
}
QString Bot::get_token() //Return bot's token
{
    return Bot::Token;
}
QChar Bot::get_prefix()  //Return bot's commands prefix
{
    return Bot::Prefix;
}


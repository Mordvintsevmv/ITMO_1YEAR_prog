#ifndef IdCard_hpp
#define IdCard_hpp

#include <stdio.h>

#endif /* IdCard_hpp */
#pragma once
#include <string>
using namespace std;

class IdCard
{
private:
    int number;
    string category;
public:
    IdCard();
    IdCard(int);
    IdCard(int,string);
    void setNumber(int NewNumber);
    int getNumber();
    void setCategory(string cat);
    string getCategory();
};


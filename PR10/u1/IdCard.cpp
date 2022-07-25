#include "IdCard.hpp"
#pragma once
#include <string>
using namespace std;

IdCard::IdCard(){
    number = 0;
    category = "Не установена";
}

IdCard::IdCard(int n){
    number = n;
    category = "Не установлена";
}

IdCard::IdCard(int n, string cat){
    number = n;
    category = cat;
}

void IdCard::setNumber(int NewNumber){
    number = NewNumber;
}

int IdCard::getNumber(){
    return number;
}

void IdCard::setCategory(string cat){
    category = cat;
}

string IdCard::getCategory(){
    return category;
}


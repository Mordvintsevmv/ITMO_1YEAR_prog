
#include "IdCard.hpp"


IdCard::IdCard(int n)
{
    number = n;
    category = "Не задана";
}
IdCard::IdCard()
{
    number = 0;
    category = "Не задана";
}
IdCard::IdCard(int n, string cat)
{
    number = n;
    category = cat;
}

void IdCard::setNumber(int newNumber)
{
    number = newNumber;
}

int IdCard::getNumber()
{
    return number;
}


void IdCard::setCategory(string cat)
{
    category = cat;
}

string IdCard::getCategory()
{
    return category;
}


#include "PaperBook.hpp"
#include <iostream>
#include "Item.hpp"
#include <string>
#pragma once

void PaperBook::getdata(){
    Item::getdata();
    cout << "Введите число страниц: ";
    cin >> pages;
}

void PaperBook::putdata()
{
    cout << "\n*Бумажная книга*";
    Item::putdata();
    cout << "\nСтраниц: " << pages << endl;
}



#include "Item.hpp"
#include <iostream>
#include <string>
#pragma once

 void Item::getdata()
{
    cout << "\nВведите заголовок: ";
    cin >> title;
    cout << "Введите цену: ";
    cin >> price;
}

 void Item::putdata()
{
    cout << "\nЗаголовок: " << title;
    cout << "\nЦена:" << price;
}

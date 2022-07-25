#include "AudioBook.hpp"
#include <iostream>
#include "Item.hpp"
#include <string>
#pragma once

void AudioBook::getdata(){
    Item::getdata();
    cout << "Введите время звучания: ";
    cin >> time;
}

void AudioBook::putdata(){
    cout << "\n*Аудиокнига*";
    Item::putdata();
    cout << "\nВремя звучания: " << time << endl;
}



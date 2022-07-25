#include <iostream>
#include <string>
#include "Item.hpp"
#include "PaperBook.hpp"
#include "AudioBook.hpp"

int main() {
    Item* pubarr[100];
    
    int n = 0;
    char choice;
    do
    {
        cout << "\nВводить данные для книг или звукового файла? (b/a): ";
        cin >> choice;
        if (choice == 'b'){
            pubarr[n] = new PaperBook;
            
        }
        else {
            pubarr[n] = new AudioBook;
        }
        pubarr[n++]->getdata();
        cout << "Продолжать вводить данные? (y/n): ";
        cin >> choice;
    }
    while(choice == 'y');
    
    for (int i = 0; i<n; i++){
        pubarr[i]->putdata();
    }
};



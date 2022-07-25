#include "ArtWorker.hpp"
#include "Musician.hpp"
#include "Prod.hpp"
#include "Artist.hpp"
#include <string>
#include <list>
#include <iostream>
using namespace std;

void printMenu() {
    cout << "\n1 - Добавить человека\n";
    cout << "2 - Вывести список людей\n";
    cout << "0 - Закончить\n\n";
}

ArtWorker* createArtWorker() {
    ArtWorker* human = new ArtWorker();
    cout << "\n\tДобавить:" << endl;
    cout << "\t1 - Музыканта" << endl;
    cout << "\t2 - Продюссера" << endl;
    cout << "\t3 - Художника\n" << endl;
    int userChoice;
    cin >> userChoice;
    
    string RealName;
    string SceneName;
    list<string> works;
    list<string> projects;
    int rating;
    double budget;
    
    int day; int month; int year;
    
    cout << "\nИмя: "; cin >> RealName;
    cout << "Сценическое имя: "; cin >> SceneName;
    
    cout << "День рождения: " << endl;
    bool f = true;
    while (f){
    cout << "\tДень (DD): "; cin >> day;
    cout << "\tМесяц (MM): "; cin >> month;
    cout << "\tГод (YYYY): "; cin >> year;
        if (day > 31){
            cout << "Вы ввели неверную дату\n";
            
        }
        else if (month > 12){
            cout << "Вы ввели неверный месяц\n";
        }
        else if (year > 2018){
            cout << "Вы введи неверный год\n";
        }
        else {f = false;};
        };
    BDate* birth = new BDate(day, month, year);
    
    cout << "\nРаботы: ";
    char wc;
    string work;
    while (true){
        cout << "\n\t1 - Добвить работу";
        cout << "\n\t0 - Закончить\n";
        cin >> wc;
        if (wc == '0'){break;}
        switch (wc){
            case '0':
                break;
            case '1':
                cout << "\nВведите название работы: ";
                cin >> work;
                works.push_back(work);
                break;
            default:
                break;
        }
    }
    
    cout << "\nПроекты: ";
    char pc;
    string project;
    while (true){
        cout << "\n\t1 - Добвить проект";
        cout << "\n\t0 - Закончить\n";
        cin >> pc;
        if (pc == '0'){break;}
        switch (pc){
            case '0':
                break;
            case '1':
                cout << "\nВведите название проекта: ";
                cin >> project;
                projects.push_back(project);
                break;
            default:
                break;
        }
    }

    
    cout << "\nМесто в рейтинге: "; cin >> rating;
    
    cout << "Бюджет: "; cin >> budget;
    
    switch (userChoice) {
            
        case 1:
            human = new Musician(RealName, SceneName, "Музыкант", birth, works, projects, rating, budget);
            break;
            
        case 2:
            human = new Prod(RealName, SceneName, "Продюсер",  birth, works, projects, rating, budget);
            break;
            
        case 3:
            human = new Artist(RealName, SceneName, "Художник" ,birth, works, projects, rating, budget);
            break;
            
        default:
            break;
    }
    return human;
}

void printArtWorker(list<ArtWorker*> people) {
    list<ArtWorker*>::iterator iter = people.begin();
    int i = 1;
    while (iter != people.end())
    {
        cout << i++ << ". ";
        (*iter++)->printInf();
        cout << "\n";
    }
}

int main() {
    
        setlocale(LC_ALL, "Russian");
    
        list<ArtWorker*> people;
        while (true) {
            printMenu();
            int choice;
            cin >> choice;
            if (choice == 0) break;
            switch (choice)
            {
                case 1:
                    people.push_back(createArtWorker());
                    break;
                case 2:
                    printArtWorker(people);
                    break;
                default:
                    break;
            }
        }
        return 0;
}
    


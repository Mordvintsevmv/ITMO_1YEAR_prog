#include <iostream>
#include <string>
#include "student.hpp"
#include "IdCard.hpp"

using namespace std;
int main() {
    
    setlocale(LC_ALL, "Russian");
    
    string name;
    string last_name;
    int id;
    string dop;
    cout << "Name: ";
    getline(cin, name);
    cout << "Last name: ";
    getline(cin, last_name);
    cout << "Id : "; cin >> id;
    cout << "Category : "; cin >> dop;
    IdCard idc(id, dop);
    Student *student02 = new Student(name, last_name, idc);
    
    student02->set_name(name);
    student02->set_last_name(last_name); // Оценки
    int scores[5];
    // Сумма всех оценок
    int sum;
    sum = 0;
    for (int i = 0; i < 5; ++i) {
        cout << "Score " << i+1 << ": "; cin >> scores[i];
        sum += scores[i];
    }

    
    student02->set_scores(scores);
    double average_score = sum / 5.0;
    student02->set_average_score(average_score);
    
    cout << "Average ball for " << student02->get_name() << " "<< student02->get_last_name() << " is "<< student02->get_average_score() <<endl;
    
    cout << "IdCard: " << student02->getIdCard().getNumber() << endl; cout << "Category: " << student02->getIdCard().getCategory() << endl;
    
    delete student02;
     return 0;
}

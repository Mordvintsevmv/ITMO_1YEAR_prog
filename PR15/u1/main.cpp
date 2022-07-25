#include <iostream>
#include <string>
#include "Student.hpp"
#include "IdCard.hpp"
#include "Group.hpp"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    string name;
    string last_name;
    IdCard* idc = new IdCard(123456, "Добро");
    IdCard* idc2 = new IdCard(654321, "Зло");
    
    cout << "Имя: ";
    getline(cin, name);
    
    cout << "Фамилия: ";
    getline(cin, last_name);
    
    Student *student02 = new Student(name, last_name, idc);
    Student *student03 = new Student("Хороший", "Андрей", idc2);
    Student *student04 = new Student("Плохой", "Антон", idc);
    Student *student05 = new Student("Замечательный", "Семён", idc2);
    Student *student06 = new Student("Отвратительный", "Артём", idc);
    
    int scores[5];
    int sum = 0;
    
    for (int i = 0; i < 5; ++i) {
        cout << "Оценка " << i + 1 << ": ";
        cin >> scores[i];
        sum += scores[i];
    }
    
    student02->set_scores(scores);
    
    double average_score = sum / 5.0;
    student02->set_average_score(average_score);
    
    
    cout << "Средниий бал " << student02->get_name() << " " << student02->get_last_name() << " -- " << student02->get_average_score() << endl;
    
    
    Group gr1957("1957");
    gr1957.addStudent(student02);
    gr1957.addStudent(student03);
    gr1957.addStudent(student04);
    gr1957.addStudent(student05);
    gr1957.addStudent(student06);
    int k = gr1957.getSize();
    gr1957.GroupSort();
    cout << "В группе " << gr1957.getName() << " " << k << " ст." << endl;
    gr1957.GroupOut();
    cout << endl;
    gr1957.delStudent(gr1957.findStudent("Плохой", "Антон"));
    gr1957.GroupOut();
    
    cout << (student02 == student03);
    cout << endl;
    
    delete student02;
    delete student03;
    delete student04;
    delete student05;
    delete student06;
    return 0;
}

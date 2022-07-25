#include <iostream>
#include <vector>
#include "human.hpp"
#include "student.hpp"
#include "teacher.hpp"

using namespace std;

int main() {
    vector<int> scores;
    scores.push_back(5);
    scores.push_back(3);
    scores.push_back(4);
    scores.push_back(4);
    scores.push_back(5);
    scores.push_back(3);
    scores.push_back(3);
    scores.push_back(3);
    scores.push_back(3);
    
    student *stud = new student("Зубенко","Михаил","Петрович",scores);
    cout << stud->get_full_name() << "\n";
    cout<< "Средний балл = " << stud->get_average_score() << "\n";

    unsigned int teacher_work_time = 174;
    teacher *teach = new teacher("Странный","Кама","Пуля",teacher_work_time);
    cout << teach->get_full_name() << "\n";
    cout << "Количество часов: " << teach->get_work_time() << "\n";
};

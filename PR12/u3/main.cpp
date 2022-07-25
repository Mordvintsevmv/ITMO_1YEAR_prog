#include <iostream>
#include <vector>
#include "human.hpp"
#include "student.hpp"
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
    
    
};

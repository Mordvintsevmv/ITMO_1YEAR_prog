#include <iostream>
#include "student.hpp"
using namespace std;
#include "human.hpp"
#include <string>
#include <vector>

student::student(string last_name, string name, string second_name,vector<int> scores): human::human(last_name, name, second_name) {
    this->scores = scores;
}

float student::get_average_score()
{
    unsigned int count_scores = this->scores.size();
    unsigned int sum_scores = 0;
    float average_score;
    for (unsigned int i = 0; i < count_scores; ++i) { sum_scores += this->scores[i];}
    average_score = (float) sum_scores / (float) count_scores;
    return average_score;
}

void student::print_data(){
    human::print_data();
    cout << "\nСредний балл: " << this->get_average_score() << endl;
}

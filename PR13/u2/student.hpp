#ifndef student_hpp
#define student_hpp

#include <stdio.h>

#endif /* student_hpp */
#pragma once
using namespace std;
#include "human.hpp"
#include <string>
#include <vector>

class student: public human{
public:
    student(string, string, string, vector<int>);
    float get_average_score();
    void print_data();
private:
    vector<int> scores;
};


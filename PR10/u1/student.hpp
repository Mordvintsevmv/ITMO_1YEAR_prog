
#ifndef student_hpp
#define student_hpp

#include <stdio.h>
#include "IdCard.hpp"


#endif /* student_hpp */
/* student.h */
#pragma once
#include <string>
using namespace std;
class Student
{
public:
    IdCard* iCard;
        // Конструктор
    Student(string, string, IdCard);
    // Установка имени студента
    void set_name(string);
    // Получение имени студента
    string get_name();
    // Установка фамилии студента
    void set_last_name(string);
    // Получение фамилии студента
    string get_last_name();
    // Установка промежуточных оценок
    void set_scores(int []);
    // Установка среднего балла
    void set_average_score(double);
    // Получение среднего балла
    double get_average_score();
    void setIdCard(IdCard *c);
    IdCard getIdCard();
    

private:
    
    // Промежуточные оценки
    int scores[5];
    // Средний балл
    double average_score;
    // Имя
    string name;
    // Фамилия
    string last_name;
};


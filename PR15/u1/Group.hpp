#pragma once 
#include <string>
#include "Student.hpp"
#include <list>
#include <algorithm>
#include <set>

using namespace std;

class Group
{
private:
    string name;
    multiset<Student*, compareStudent> masSt;
    multiset<Student*, compareStudent>::iterator iter;
    
public:
    Group(string name);
    Group();
    
    void setName(string newName);
    string getName();
    int getSize();
    void addStudent(Student* newStudent);
    void delStudent(Student* oldStudent);
    Student* findStudent(string, string);
    void GroupSort();
    void GroupOut();
};

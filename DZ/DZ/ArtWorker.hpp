#ifndef ArtWorker_hpp
#define ArtWorker_hpp

#include <stdio.h>
#include "BDate.hpp"
#include <string>
#include <list>
#pragma once

#endif /* ArtWorker_hpp */
using namespace std;

class ArtWorker{
private:
    
    string RealName;
    string SceneName;
    string Type;
    BDate* birth;
    list<string> works;
    list<string> projects;
    int rating;
    double budget;
    
public:
    
    ArtWorker();
    ArtWorker(string RealName, string SceneName, string Type, BDate* birth, list<string> works, list<string> projects, int rating, double budget);
    
    void printInf();
    
    string getRealName();
    void setRealName(string RealName);
    
    string getSceneName();
    void setSceneName(string SceneName);
    
    int getAge();
    
    BDate* getBithDay();
    
    void printWorks();
    
    void printProjects();
    
    double getBudget();
    void ChangeBudget(double money);
    
    int getRating();
    void upRating(int up);
    void downRating(int down);
    
    void Doing();
};


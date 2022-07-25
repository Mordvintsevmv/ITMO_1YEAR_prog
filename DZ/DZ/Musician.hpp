#ifndef Musician_hpp
#define Musician_hpp
#include <stdio.h>
#include "ArtWorker.hpp"
#pragma once
#endif /* Musician_hpp */
using namespace std;

class Musician : public ArtWorker{
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
    
    Musician();
    Musician(string RealName, string SceneName, string Type, BDate* birth, list<string> works, list<string> projects, int rating, double budget);
    
    void Doing();
};


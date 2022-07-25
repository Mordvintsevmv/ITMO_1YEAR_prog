#ifndef Prod_hpp
#define Prod_hpp
#include "Musician.hpp"
#include <stdio.h>
#include <iostream>
#include "ArtWorker.hpp"
#include <string>
#include <list>
#endif /* Prod_hpp */
using namespace std;
#pragma once

class Prod : public Musician{
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
    
    Prod();
    Prod(string RealName, string SceneName, string Type, BDate* birth, list<string> works, list<string> projects, int rating, double budget);
    
    void Doing();
};


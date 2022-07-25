#ifndef Artist_hpp
#define Artist_hpp
#include "BDate.hpp"
#include <iostream>
#include "ArtWorker.hpp"
#include <string>
#include <list>
#include <stdio.h>

#endif /* Artist_hpp */
using namespace std;
#pragma once
class Artist : public ArtWorker{
private:
    
    string RealName;
    string SceneName;
    string Type;
    BDate* birth;
    list<string> works;
    list<string> projects;
    int rating;
    bool popular;
    double budget;
    
    
public:
    
    Artist();
    Artist(string RealName, string SceneName, string Type, BDate* birth, list<string> works, list<string> projects, int rating, double budget);
    
    void Doing();
};


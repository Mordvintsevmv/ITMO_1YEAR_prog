#include "Prod.hpp"
#include "Musician.hpp"
#include <iostream>
using namespace std;

Prod::Prod() : Musician::Musician(){
}

Prod::Prod(string RealName, string SceneName, string Type, BDate* birth, list<string> works, list<string> projects, int rating, double budget) : Musician::Musician(RealName, SceneName, Type, birth, works, projects, rating, budget){
    
    this->Type = "Продюссер";
}


void Prod::Doing(){
    cout << this->SceneName << "пишет музыку!";
}

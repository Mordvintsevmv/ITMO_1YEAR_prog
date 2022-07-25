#include "Musician.hpp"
#include <iostream>
#include "ArtWorker.hpp"
#include <string>
#include <list>
using namespace std;

Musician::Musician() : ArtWorker::ArtWorker(){
}

Musician::Musician(string RealName, string SceneName, string Type, BDate* birth, list<string> works, list<string> projects, int rating, double budget) : ArtWorker::ArtWorker(RealName, SceneName, Type, birth, works, projects, rating, budget){
    
    this->Type = "Музыкант";
}


void Musician::Doing(){
    cout << this->SceneName << "выступает на концерте в данный момент!";
}

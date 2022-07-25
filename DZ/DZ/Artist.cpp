#include "Artist.hpp"
#include <iostream>
#include <string>
#include <list>
using namespace std;

Artist::Artist() : ArtWorker::ArtWorker(){
}

Artist::Artist(string RealName, string SceneName, string Type, BDate* birth, list<string> works, list<string> projects, int rating, double budget) : ArtWorker::ArtWorker(RealName, SceneName, Type, birth, works, projects, rating, budget){
    
    this->Type = "Художник";
}


void Artist::Doing(){
    cout << this->SceneName << "делает арт-инсталяцию!";
}

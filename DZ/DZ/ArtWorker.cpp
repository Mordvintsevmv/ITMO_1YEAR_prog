#include "ArtWorker.hpp"
#include <iostream>
#include <string>
#include <list>
using namespace std;

ArtWorker::ArtWorker(){
    this->RealName = "None";
    this->SceneName = "None";
    this->Type = "None";
    this->works = {};
    this->birth = new BDate();
    this->projects = {};
    this->rating = 0;
    this->budget = 0;
}

ArtWorker::ArtWorker(string RealName, string SceneName, string Type, BDate* birth, list<string> works, list<string> projects, int rating, double budget){
    
    this->RealName = RealName;
    this->SceneName = SceneName;
    this->Type = Type;
    this->birth = birth;
    this->works = works;
    this->projects = projects;
    this->rating = rating;
    this->budget = budget;
}


void ArtWorker::printInf(){
     cout << this->Type;
     cout << "\nНастоящее имя: " << this->RealName << endl;
     cout << "Сценическое имя: " << this->SceneName << endl;
     cout << "Возраст: " << this->getAge() << endl;
     this->printWorks();
     this->printProjects();
     cout << "Место в рейтинге: " << this->rating << endl;
     cout << "Бюджет: " << this->budget << endl;

}

string ArtWorker::getRealName(){
    return this->RealName;
}

void ArtWorker::setRealName(string RealName){
    this->RealName = RealName;
}

string ArtWorker::getSceneName(){
    return this->SceneName;
}

void ArtWorker::setSceneName(string SceneName){
    this->SceneName = SceneName;
}

int ArtWorker::getAge(){
    int age = this->birth->getAge();
    return age;
}

void ArtWorker::printWorks(){
    cout << "Работы: \n";
    for (string w : this->works){
        cout << "\t" << w << endl;
    };
}

void ArtWorker::printProjects(){
    cout << "Участвует в поектах: \n";
    for (string p : this->projects){
        cout << "\t" << p << endl;
    };
}


double ArtWorker::getBudget(){
    return this->budget;
}

void ArtWorker::ChangeBudget(double money){
    this->budget += money;
}

int ArtWorker::getRating(){
    return this->rating;
}

void ArtWorker::upRating(int up){
    this->rating += up;
}

void ArtWorker::downRating(int down){
    this->rating -= down;
}

void ArtWorker::Doing(){
    cout << "занимется искусством!";
}

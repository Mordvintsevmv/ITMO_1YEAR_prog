
#include "human.hpp"
#include <string>
#include <sstream>
using namespace std;

human::human(string last_name, string name, string second_name){
    this->name = name;
    this->last_name = last_name;
    this->second_name = second_name;
}

string human::get_full_name(){
    ostringstream full_name;
    full_name << this->last_name << " " << this->name << " " << this->second_name;
    return full_name.str();
}


#ifndef human_hpp
#define human_hpp

#include <stdio.h>

#endif /* human_hpp */
#include <string>
#include <sstream>
#pragma once
using namespace std;

class human{
public:
    human(string, string, string);
    
    string get_full_name();
    
private:
    string name;
    string last_name;
    string second_name;
};

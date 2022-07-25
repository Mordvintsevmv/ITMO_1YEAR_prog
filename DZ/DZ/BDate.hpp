#ifndef Date_hpp
#define Date_hpp

#include <stdio.h>

#endif /* Date_hpp */
#pragma once

class BDate{
private:
    
    int day;
    int month;
    int year;
    
public:
    
    BDate();
    BDate(int day, int month, int year);
    int getAge();
    
};

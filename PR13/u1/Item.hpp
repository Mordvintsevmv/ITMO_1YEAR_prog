#ifndef Item_hpp
#define Item_hpp
#include <stdio.h>
#endif /* Item_hpp */
#include <iostream>
#include <string>
#pragma once

using namespace std;
class Item
{
private:
    
    string title;
    double price;
    
public:
    
    virtual void getdata();
    virtual void putdata();
    
};



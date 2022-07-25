#ifndef AudioBook_hpp
#define AudioBook_hpp

#include <stdio.h>

#endif /* AudioBook_hpp */

#include <iostream>
#include "Item.hpp"
#include <string>
#pragma once

class AudioBook: public Item
{
private:
    double time;
public:
    void getdata();
    void putdata();
};



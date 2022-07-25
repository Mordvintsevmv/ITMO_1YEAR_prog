#ifndef PaperBook_hpp
#define PaperBook_hpp

#include <stdio.h>

#endif /* PaperBook_hpp */

#include <iostream>
#include "Item.hpp"
#include <string>
#pragma once

class PaperBook: public Item
{
private:
    
    int pages;
    
public:
    void getdata();
    void putdata();
};

#ifndef Triangle_hpp
#define Triangle_hpp

#include <stdio.h>
#include "dot.hpp"
#pragma once

#endif /* Triangle_hpp */

class Triangle
{
public:
    Dot* D1;
    Dot* D2;
    Dot* D3;
    
    Triangle(Dot, Dot, Dot);
    
    void printSideLength();
    
    double getPerimetr();
    
    double getPloshad();
    
private:
    Dot d1;
    Dot d2;
    Dot d3;
    
};

#ifndef dot_hpp
#define dot_hpp
#pragma once

#include <stdio.h>

#endif /* dot_hpp */

class Dot
{
private:
    double x;
    double y;
public:
    Dot();
    Dot(double x, double y);
    double distanceTo(Dot point);
};

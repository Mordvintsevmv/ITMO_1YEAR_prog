#include "Triangle.hpp"
#include <math.h>
#include <iostream>
using namespace std;



Triangle::Triangle(Dot d1, Dot d2, Dot d3){
    this -> d1 = d1;
    this -> d2 = d2;
    this -> d3 = d3;
}
    
void Triangle::printSideLength(){
    cout << "a = " << d1.distanceTo(d2) << "\n";
    cout << "b = " << d2.distanceTo(d3) << "\n";
    cout << "c = " << d3.distanceTo(d1) << "\n";

}
    
double Triangle::getPerimetr(){
    return (d1.distanceTo(d2) + d2.distanceTo(d3) + d3.distanceTo(d1));
}
    
double Triangle::getPloshad(){
    double a = d1.distanceTo(d2);
    double b = d2.distanceTo(d3);
    double c = d3.distanceTo(d1);
    double p = (a+b+c)/2;
    return (sqrt(p*(p-a)*(p-b)*(p-c)));
}


#include <iostream>
#include "dot.hpp"
#include "Triangle.hpp"
using namespace std;
int main() {
    double x;
    double y;
    cout << "Первая точка :\n";
    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;
    Dot d1(x,y);
    cout << "Вторая точка :\n";
    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;
    Dot d2(x,y);
    
    cout << "Третья точка :\n";
    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;
    Dot d3(x,y);
    
    cout << "\n";
    
    Triangle *tr = new Triangle(d1, d2, d3);
    
    tr -> printSideLength();
    cout << "\n";
    
    cout << "Периметр треугольника = " << tr -> getPerimetr();
    cout << "\n";
    
    cout << "Площадь треугольника = " << tr -> getPloshad();
    cout << "\n";
    }

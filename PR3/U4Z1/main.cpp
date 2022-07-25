#include <iostream>
#include <math.h>

using namespace std;

double ploshad(double a){
    return (sqrt(3)/4) * a*a;
}

double ploshad(int a){
    return (sqrt(3)/4) * a*a;
}

int main() {
    setlocale(LC_ALL, "Russian");

    double a;
    double s;

    cout << "Введите сторону треугольника : "; cin >> a;
    s = ploshad(a);
    cout << "Площадь = "  << s;

    return 0;
}



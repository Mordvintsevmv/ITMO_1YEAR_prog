#include <iostream>
#include <math.h>

using namespace std;

double dlina(int xa, int ya, int xb, int yb){
    return sqrt(pow((xa - xb),2) + pow((ya - yb),2));
}

double ploshad(float a, float b, float c){
    double p;
    p = (a + b + c) / 2;
    return sqrt(p*(p-a)*(p-b)*(p-c));
}

int main() {
    setlocale(LC_ALL, "Russian");
    int x1,y1,x2,y2,x3,y3,x4,y4,x5,y5;
    double a,b,c,d,e,f,g,s1,s2,s3,s;

    // можно использовать : (0,0) (2,5) (6,6) (9,3) (6,0)
    cout << "Введите пять коордиат : " << endl;
    cout << "x1, y1 : " <<endl; cin >> x1; cin >> y1;
    cout << "x2, y2 : " <<endl; cin >> x2; cin >> y2;
    cout << "x3, y3 : " <<endl; cin >> x3; cin >> y3;
    cout << "x4, y4 : " <<endl; cin >> x4; cin >> y4;
    cout << "x5, y5 : " <<endl; cin >> x5; cin >> y5;


    a = dlina(x1, y1, x2, y2);
    b = dlina(x1, y1, x5, y5);
    c = dlina(x5, y5, x4, y4);
    d = dlina(x4, y4, x3, y3);
    e = dlina(x3, y3, x2, y2);
    f = dlina(x2, y2, x5, y5);
    g = dlina(x2, y2, x4, y4);

    s1 = ploshad(a, b, f);
    s2 = ploshad(c, f, g);
    s3 = ploshad(e, g, d);
    s = s1 + s2 + s3;


    cout << "Площадь пятиугольника = " <<  s;

    return 0;
}

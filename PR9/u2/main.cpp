#include <iostream>
#include "math.h"
using namespace std;

int main() {
    
    class Triangle
    {
    public:
        
        class ExSide
        {
        public:
            int side;
            ExSide(int s)
            {
                side = s;
            };
        };
        void set_side(double sa, double sb, double sc)
        {
            a = sa;
            b = sb;
            c = sc;
            
            throw 123;
            if (a > b+c) {throw ExSide(a);};
            if (b > a+c) {throw ExSide(b);};
            if (c > b+a) {throw ExSide(c);};
        }
        
        double get_square(double sa, double sb, double sc)
        {
            double p = (sa+sb+sc)/2;
            return sqrt(p*(p-sa)*(p-sb)*(p-sc));
        }
        
    private:
        double a;
        double b;
        double c;
    };
    
    Triangle *t1 = new Triangle();
    double a;
    double b;
    double c;
    
    cout << "Введите сторону a = "; cin >> a;
    cout << "Введите сторону b = "; cin >> b;
    cout << "Введите сторону c = "; cin >> c;
    try
    {
        t1->set_side(a,b,c);
    }
    catch(int a)
    {
        if (a == 123){ cout << "ОНО РАБОТАЕТ";};
    }
    catch(Triangle::ExSide ex){
        cout << "Сторона" << ex.side << endl;
        
    }

    
    cout << "Площадь данного треугольника = " << t1->get_square(a,b,c) << "\n";
    
    
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    
    class Distance{
    private:
        int feet;
        float inches;
    public:
        Distance (): feet(0), inches(0.0){}
        Distance (int ft, float in): feet(ft), inches(in){}
        
        void getdist(){
            cout << "\nВведите число футов: "; cin >> feet;
            cout << "\nВведите число дюймов: "; cin >> inches;
        }
        
        void showdist(){
            cout << feet << "\'-" << inches << "\"\n";
        }
        
        Distance operator+ (Distance d2) const{
            int f = feet + d2.feet;
            float i = inches + d2.inches;
            while (i>=12){
                i -= 12.0;
                f++;
            }
            return Distance (f, i);
        }
        
        Distance operator- (Distance d2) const{
            int f = feet - d2.feet;
            float i = inches - d2.inches;
            while (i<0){
                i += 12.0;
                f--;
            }
            return Distance (f, i);
        }
        
        Distance& operator++ () {
            inches++;
            return *this;
        }
    };
    
    Distance dist1, dist2, dist3, dist4;

    dist1.getdist();
    dist2.getdist();
    dist3.getdist();
    dist4.getdist();
    
    dist3 = dist1 + dist2;
    cout << "dist3: ";
    dist3.showdist();
    
    dist4 = dist3 + dist2 + dist1;

    cout << "dist1: ";
    dist1.showdist();
    cout << "dist2: ";
    dist2.showdist();
    cout << "dist3: ";
    dist3.showdist();
    cout << "dist4: ";
    dist4.showdist();

    dist3 = dist1 - dist2;
    cout << "Разность: ";
    dist3.showdist();
    
    ++dist3;
    dist3.showdist();
}


















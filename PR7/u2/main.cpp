#include <iostream>
using namespace std;

struct Distance {
    int feet;
    double inches;
};

Distance AddDist(const Distance &d1, const Distance &d2){
    Distance d;
    d.feet = d1.feet + d2.feet;
    d.inches = d1.inches + d2.inches;

    while (d.inches >= 12){
        d.inches -= 12;
        d.feet++;
    }

    return d;
}

Distance InputDist(){
    Distance d;
    cout << "Введите число футов : "; cin >> d.feet;
    cout << "\nВведите число дюймов : "; cin >> d.inches;
    while (d.inches >= 12){
        d.inches -= 12;
        d.feet++;
    }
    return d;
}

void ShowDist(const Distance &d){
    cout << d.feet << "\'-" << d.inches << "\"\n";
}
int main() {
    setlocale(LC_ALL, "Russian");

    Distance d1 = InputDist();
    Distance d2 = {1,6.25};
    Distance d3 = AddDist(d1,d2);
    cout << "d1 = "; ShowDist(d1);
    cout << "\nd2 = "; ShowDist(d2);
    cout << "\nd3 = "; ShowDist(d3);






    return 0;
}

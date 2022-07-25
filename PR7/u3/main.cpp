#include <iostream>
using namespace std;

struct Distance {
    int feet;
    double inches;

    int Get1(){
        return feet;
    }

    int Get2(){
        return inches;
    }



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

void ShowDist(Distance d){
    cout << d.feet << "\'-" << d.inches << "\"\n";
}

int main() {
    setlocale(LC_ALL, "Russian");

    int n;
    Distance sum = {0,0};
    Distance sumF ;
    cout << "Введите размер массива : "; cin >> n;

    Distance * masDist = new Distance[n];
    for (int i = 0; i < n; i++){
        cout << "masDist[" << i << "] = ";
        masDist[i] = InputDist();
        sum = AddDist(sum,masDist[i]);
    }

    for (int i = 0; i < n; i++){
        ShowDist(masDist[i]);
    }

    cout << "Сумма расстояний = ";
    //ShowDist(sum);


    cout << sum.Get1() << "\'-" << sum.Get2() << "\" \n";
    Distance dI = {sum.Get1(), double(sum.Get2())};
    ShowDist(dI);





    delete[] masDist;

    return 0;
}

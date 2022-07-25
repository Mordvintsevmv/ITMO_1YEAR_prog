#include <iostream>
#include <cstdlib>
#include <ctime>
// Вариант 2
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");

    char rezim;
    int vist, i, sum;
    double x,y;
    sum = 0;
    srand(time(NULL));

    cout << "Выберите режим : Standart, Vslepuyu, Pomexa : "; cin >> rezim;
    cout << "Сколько выстрелов ? : "; cin >> vist;
    switch(rezim){
        case('S'):
            cout << "Вы выбрали режим стрельбы 'Стандартный' " << endl;
            for (i = 1; i <= vist; i++){
                cout << "Куда стреляете? (x,y) : "; cin >> x; cin >> y;
                if  (x * x + y * y <= 1) {sum += 10; cout << "10 Баллов ! " << endl;}
                else if (x * x + y * y > 1 && x * x + y * y <= 2) {sum += 5; cout << "5 Баллов ! " << endl;}
                else if (x * x + y * y > 2 && x * x + y * y <= 3) {sum += 1; cout << "1 Балл ! " << endl;}
                else if (x * x + y * y > 3) {sum += 0; cout << "Вы промахнулись :( " << endl;}}
            break;


        case('V'):
            cout << "Вы выбрали режим стрельбы 'Вселпую' " << endl;
            for (i = 1; i <= vist; i++){
                x = rand() % 4;
                y = rand() % 4;
                cout << "Ваш выстрел : (" << x << " , " << y << ")" << endl;
                if  (x * x + y * y <= 1) {sum += 10; cout << "10 Баллов ! " << endl;}
                else if (x * x + y * y > 1 && x * x + y * y <= 2) {sum += 5; cout << "5 Баллов ! " << endl;}
                else if (x * x + y * y > 2 && x * x + y * y <= 3) {sum += 1; cout << "1 Балл ! " << endl;}
                else if (x * x + y * y > 3) {sum += 0; cout << "Вы промахнулись :( " << endl;}}
            break;

        case('P'):
            cout << "Вы выбрали режим стрельбы 'С погрешностью'  " << endl;
            for (i = 1; i <= vist; i++){
                cout << "Куда стреляете? (x,y) : "; cin >> x; cin >> y;
                x += rand() % 4;
                y += rand() % 4;
                cout << "Ваш выстрел : (" << x << " , " << y << ")" << endl;
                if  (x * x + y * y <= 1) {sum += 10; cout << "10 Баллов ! " << endl;}
                else if (x * x + y * y > 1 && x * x + y * y <= 2) {sum += 5; cout << "5 Баллов ! " << endl;}
                else if (x * x + y * y > 2 && x * x + y * y <= 3) {sum += 1; cout << "1 Балл ! " << endl;}
                else if (x * x + y * y > 3) {sum += 0; cout << "Вы промахнулись :( " << endl;}}
            break;

            default: cout << "Неверный режим";
    }

    cout << endl << "Вы набрали " << sum << " баллов!" << endl;

    if (sum/vist >= 7.5) cout << "Красавчик!";
    else if (sum/vist < 7.5 && sum/vist >= 2.5) cout << "Ну блин, плохо((";
    else cout << "Какой кошмар! ;(";

    return 0;
}


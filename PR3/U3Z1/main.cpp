#include <iostream>
#include <string>

using namespace std;

void privet(string name){
    cout << name << ", здравствуйте! " << endl;
}

void privet(string name, int k){
    cout << name << ", ещё раз здравствуйте!" << endl << "Вы ввели : " << k << endl;
}

int main() {
    setlocale(LC_ALL, "Russian");

    string name;
    int k;
    cout << "Введите ваше имя : "; cin >> name;
    cout << "Ну введитие хоть что-нибудь : "; cin >> k;

    privet(name);
    privet(name,k);

    return 0;
}


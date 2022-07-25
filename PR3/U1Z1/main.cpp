#include <iostream>
#include <string>

using namespace std;

void privet(string name);

int main() {
    setlocale(LC_ALL, "Russian");

    string name;
    cout << "Введите ваше имя : ";
    cin >> name;
    privet(name);

    return 0;
}

void privet(string name){
    cout << name << ", здравствуйте! " << endl;
}

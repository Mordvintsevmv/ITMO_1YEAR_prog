#include <iostream>

using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    int x;
    int y;
    cout << "Введите координаты через пробел : ";
    cin >> x;
    cin >> y;
    if (x * x + y * y < 9 && y > 0){
        cout << "Внутри" << endl;}
    else  if (x * x + y * y > 9 || y < 0){
        cout << "Снаружи" << endl;}
    else cout << "На границе" << endl;

    return 0;
}
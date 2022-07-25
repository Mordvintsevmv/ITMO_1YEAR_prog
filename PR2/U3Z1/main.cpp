#include <iostream>

using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");

    int s,k,m;
    s = 0;
    cout << "Введите число k : "; cin >> k;
    cout << "Введите число m : "; cin >> m;

    for (int i = 1; i <= 100; i++){
        if ((i > k) && (i < m)) continue;
        s += i;
    }

    cout << "Сумма = " << s;
    return 0;
}

#include <iostream>

using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");

    char op;
    cout << "Сделай свой выбор, собери авто свой мечты: " << endl;
    cin >> op;

    switch(op)
        {
            case 'V':
                cout << "Кондиционер хочу\n";
            case 'S':
                cout << "Радио играть должно\n";

            default:
                cout << "Колеса круглые\n";
                cout << "Мощный двигатель\n";
        }
    return 0;
}

#include <iostream>
#include <fstream>

using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");

    int n;
    string s;

    cout << "Сколько будет строк? : "; cin >> n;

    ofstream stix;
    stix.open("stix.txt", ios_base::out);
    for (int i = 0; i < n; i++){
        cout << i+1 << "-ая строка : ";
        cin >> s;
        stix << s << "\n";
    }

    return 0;
}

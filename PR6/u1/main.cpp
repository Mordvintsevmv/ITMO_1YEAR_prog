#include <iostream>
#include <ctime>
#include <fstream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    double sum = 0;
    int const n = 100;
    double nums[n];

    srand(time(0));
    for (int i; i < n; i++){
        nums[i] = rand() % 10 + 1;
    }

    ofstream out ("test", ios::out | ios::binary);
    if (!out) {
        cout << "Файл открыть невозможно\n";
        return 1; }


    out.write((char *)nums, sizeof(nums));
     out.close();

    ifstream in ("test", ios::in | ios::binary);
    if(!in) {
        cout << "Файл открыть невозможно";
        return 1;
    }

    in.read((char *)&nums, sizeof(nums));

    int k = sizeof(nums)/sizeof(double);
    for (int i=0; i<k; i++)
    {
        sum = sum + nums[i];
        cout << nums[i] <<' ';
    }
    cout << "\nsum = " << sum << endl;

    in.close();
    return 0;
}

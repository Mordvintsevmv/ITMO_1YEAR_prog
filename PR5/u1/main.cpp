#include <iostream>

using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");

    const int n = 10;
    int mas[n];
    int sum = 0;
    int asum = 0;
    int bsum = 0;
    int csum = 0;
    int dsum = 0;
    int tmax = 0;
    int tmin = 0;
    int max = -999999999;
    int min = 999999999;
    int proizv = 1;

    for (int i = 0; i < n; i++){
        cout << "mas[" << i << "] = "; cin >> mas[i];
        sum += mas[i];
        if (mas[i] < 0){asum += mas[i];};
        if (mas[i] > 0){bsum += mas[i];};
        if ((i % 2) == 1){csum += mas[i];};
        if ((i % 2) == 0){dsum += mas[i];};
        if (mas[i] > max){max = mas[i]; tmax = i;};
        if (mas[i] < min){min = mas[i]; tmin = i;};
    }
    if (tmax > tmin){
        for (tmin; tmin < (tmax - 1); tmin++){
            proizv *= mas[tmin+1];};
    }
    else {
        for(tmax; tmax < (tmin - 1); tmax++){
            proizv *= mas[tmax+1];};
    }

    cout << "Сумма всех элементов : " << sum << "\n";
    cout << "Сумма всех отрицательных элементов : " << asum << "\n";
    cout << "Сумма всех положительных элементов : " << bsum << "\n";
    cout << "Сумма всех элементов с нечетными номерами : " << csum << "\n";
    cout << "Сумма всех элементов с четными номерами : " << dsum << "\n";
    cout << "Произведение между наименьшим и наибольшим : " << proizv << "\n";
    return 0;
}
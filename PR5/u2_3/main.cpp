#include <iostream>
#include <ctime>
using namespace std;

void show_array(const int a[], const int n){
    for (int i =0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << "\n";
}

bool from_min(const int a, const int b){
    return a > b;
}

bool from_max(const int a, const int b){
    return a < b;
}

void bubble_sort(int a[], const int n, bool (*compare)(int a, int b)){
    for (int i = 1; i < n; i++){
        for (int j = 0; j < n-1; j++){
            if( (*compare)(a[j],a[j+1]) ){swap(a[j],a[j+1]);};
        }
    }
}

bool (*from_f[2])(int, int) = { from_min,from_max };

int main() {
    setlocale(LC_ALL, "Russian");

    int n;
    int v = 0;

    int* a = new int[n];
    cout << "Введите размер массива: "; cin >> n;
    srand(time(0));

    for (int i = 0; i < n; i++){
        a[i] = rand() % 100 + 1;
    }

    cout << "1. Сортировать по возрастанию\n";
    cout << "2. Сортировать по убыванию\n";
    cin >> v;
    cout << "Исходные данные : ";
    show_array(a,n);

    bubble_sort(a,n,(*from_f[v - 1]));

    show_array(a,n);


    return 0;
}

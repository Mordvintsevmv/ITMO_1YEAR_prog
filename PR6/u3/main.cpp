#include <iostream>
#include <ctime>
#include <fstream>

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

    const int n = 10;
    int v = 0;
    int a[n];
    srand(time(0));

    for (int i = 0; i < n; i++){
        a[i] = rand() % 100 + 1;
    }

    ofstream sort;
    sort.open("sort.txt");
    sort << "Исходные данные : ";
    for (int i = 0; i < n; i++){
        sort << a[i] << " ";
    }

    cout << "1. Сортировать по возрастанию\n";
    cout << "2. Сортировать по убыванию\n";
    cin >> v;
    bubble_sort(a,n,(*from_f[v - 1]));

    sort << "\nОтсортированный массив : ";
    for (int i = 0; i < n; i++){
        sort << a[i] << " ";
    }


    return 0;
}

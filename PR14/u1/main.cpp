#include <iostream>
using namespace std;

template <class T>
void sorting (T arr[], int size){
    int j = 0;
    for (int i=0; i<size; i++){
        T x = arr[i];
        for (j = i-1; j >=0 && x < arr[j]; j--){
            arr[j+1] = arr[j];}
        arr[j+1] = x;
    }
};

template <class T>
void print(T arr[], int size){
    cout << endl;
    for (int i = 0; i < size; i++ ) cout << arr[i] << " ";
    cout << endl;
};

template <class T>
T srar(T arr[], int size){
    T sum = 0;
    for (int i=0; i<size; i++) sum += arr[i];
    return sum/size;
};

int main() {

        setlocale(LC_ALL, "Russian");
    
    int arrI[] = {5,8,1,34,876,313,564,12,32,56,76,345,6,2,1,0};
    double arrD[] = {5.3,8.2,1.6,4.5,876.4,313.5,564.7,12.8,32.9,56.9,76.8,345.4,6.3,2.1,1.2,0.3};
    long arrL[] = {3232332321323,21323213232132,53534552343423,464564565654,54644545654645656,5643545556,45346433457567,435416535865765,7657647657,345346764746};
    char arrC[] = "Massiv iz bukovok!";    
    
    int kI = sizeof(arrI)/sizeof(arrI[0]);
    int kD = sizeof(arrD)/sizeof(arrD[0]);
    int kL = sizeof(arrL)/sizeof(arrL[0]);
    int kC = sizeof(arrC)/sizeof(arrC[0]) - 1;
    
    sorting(arrI, kI);
    sorting(arrD, kD);
    sorting(arrL, kL);
    sorting(arrC, kC);
    

    print(arrI, kI);
    print(arrD, kD);
    print(arrL, kL);
    print(arrC, kC);
    
    cout << endl << srar(arrI, kI) << endl;
    cout << endl << srar(arrD, kD) << endl;
    cout << endl << srar(arrL, kL) << endl;
    cout << endl << srar(arrC, kC) << endl;
  
};





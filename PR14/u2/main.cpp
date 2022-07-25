#include <iostream>
using namespace std;

template <class T, class T1>
class Narray {
public:
    Narray(int size);
    T1 sum();
    T average_value();
    void show_array();
    int add_value(T);
private:
    T *data;
    int size;
    int index;
};

template<class T, class T1> Narray<T, T1>::Narray(int size)
{
    data = new T[size];
    if (data == NULL)
    {
        cerr << "Error memory ---- exit program" << endl;
        exit(1);
    }
    Narray::size = size;
    Narray::index = 0;
};

template<class T, class T1> T1 Narray<T, T1>::sum()
{
    T1 sum = 0;
    for (int i = 0; i < index; i++) sum += data[i];
    return(sum);
};

template<class T, class T1> T Narray<T, T1>::average_value()
{
    T1 sum = 0;
    for (int i = 0; i < index; i++) sum += data[i];
    return (sum / index);
};

template<class T, class T1> void Narray<T, T1>::show_array()
{
    for (int i = 0; i < index; i++) cout << data[i] << " ";
    cout << endl;
};

template<class T, class T1> int Narray<T, T1>::add_value(T value)
{
    if (index == size)
        return(-1);
    else
    {
        data[index] = value;
        index++;
        return(0);
    }
};

int main() {
    
    Narray<int, long> numbers(100);
    Narray<float, float> values(200);
    
    int i;
    for (i = 0; i < 50; i++) numbers.add_value(i);
    numbers.show_array();
    cout << "Sum = " << numbers.sum () << endl;
    cout << "Average = " << numbers.average_value() << endl << endl;
    
    for (i = 0; i < 100; i++) values.add_value(i * 100);
    values.show_array();
    cout << "Sum = " << values.sum() << endl;
    cout << "Average =  " << values.average_value() << endl;
    
}



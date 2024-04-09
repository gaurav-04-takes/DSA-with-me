#include <iostream>
using namespace std;

template <class T>
class Calculator
{
    T a;
    T b;

public:
    Calculator();
    Calculator(T a, T b);
    T add(T a, T b);
};

template <class T>
Calculator<T>::Calculator(T a, T b)
{
    a = a;
    b = b;
}

template <class T>
T Calculator<T>::add(T a, T b)
{
    return a + b;
}

int main()
{
    Calculator<int> C(10, 5);
    cout << C.add(10, 5) << endl;
    Calculator<double> C1(5.5, 6.6);
    cout << C1.add(11.11, 22.22);
    return 0;
}
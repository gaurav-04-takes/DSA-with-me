#include <iostream>
using namespace std;

// call by value
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

// call by address
void swap1(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// call by refrence
void swap2(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

int main()
{
    // call by value...
    int x = 10;
    int y = 20;
    cout << "Before swap :" << x << y << endl;
    swap(x, y);
    cout << "After swap :" << x << y << endl;

    // call by address
    cout << "Before swap :" << x << y << endl;
    swap1(&x, &y);
    cout << "After swap :" << x << y << endl;

    // call by refrence

    cout << "Before swap :" << x << y << endl;
    swap2(x, y);
    cout << "After swap :" << x << y << endl;

    return 0;
}

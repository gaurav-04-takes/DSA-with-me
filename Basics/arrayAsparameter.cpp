#include <iostream>
#include <stdio.h>
using namespace std;

void array(int A[], int n)
{
    A[0] = 100;
    for (int i{0}; i < n; i++)
    {
        cout << A[i] << endl;
    }
}

int *heap(int size)
{
    int *p;
    p = new int(size);

    for (int i{0}; i < size; i++)
    {
        p[i] = i + 10;
    }
    return (p);
}

int main()
{
    // int A[]{1, 2, 3, 4, 5};
    // array(A, 5);

    int *b;
    b = heap(5);

    for (int i{0}; i < 5; i++)
    {
        cout << b[i] << endl;
    }

    cout << "Code run succesfully";
    return 0;
}
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    // Stack memory allocate to the array
    int A[5];
    // Declaring value to it
    A[2] = 3;
    cout << A[2] << endl;

    // An pointer is created inside a stack
    int *p1;
    int *p2;
    // Allocating memory inside the heap

    p1 = new int(5); // C++

    p2 = (int *)malloc(5 * sizeof(int));

    // Assign a value inside a heap

    p1[2] = 10;
    p2[2] = 20;

    cout << p1[2] << endl
         << p2[2] << endl;

    // Delete or free the momeory from the heap
    delete[] p1; // c++
    free(p2);    // c

    // increasing the size of the array

    int *ptr;
    int *qtr;

    ptr = new int(5);ptr[0] = 2;
    ptr[1] = 4;
    ptr[2] = 6;
    ptr[3] = 8;
    ptr[4] = 10;

    qtr = new int(10);

    for (int i = 0; i < 5; i++)
    {
        qtr[i] = ptr[i];
    }

    delete[] ptr;
    ptr = qtr;
    qtr = nullptr;
    ptr[8] = 55;

    cout << ptr[2] << " " << endl;
    cout << ptr[8] << endl;
    cout << "Code is running perfectlly";
    return 0;
}
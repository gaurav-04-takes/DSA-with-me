#include <iostream>
using namespace std;

int main()
{
    int A[5]{2, 4, 6, 8, 10};

    // Traversing

    for (size_t i = 0; i < 5; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;

    // Index inside
    cout << A[2] << endl;

    // Index Inside
    cout << 2 [A] << endl;

    // Pointer Arithmatic
    cout << *(A + 2) << endl;
    return 0;
}
#include <iostream>
using namespace std;

int main()
{

    int array[10];

    cout << "Enter an element in Array" << endl;
    for (size_t i{0}; i < 10; i++)
    { // Value Enterd in the array using Loop
        cin >> array[i];
    }

    // cout << "Element Enterd in the array is :" << endl;
    // for (size_t i : array)
    // { // Print data within the array using for each
    //     cout << i << endl;
    // }

    cout << "code run succesfully";
    return 0;
}
#include <iostream>
using namespace std;

// References === Alias to variable...
int main()
{
    int a = 10;
    int &r = a;
    r++;
    cout << a << endl
         << r << endl;
    return 0;
}
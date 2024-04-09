#include <iostream>
using namespace std;

// power
int power(int m, int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return power(m, n - 1) * m;
    }
}

int main()
{
    cout << power(3, 2);
    return 0;
}
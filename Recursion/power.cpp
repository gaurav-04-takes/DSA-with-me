#include <iostream>
using namespace std;

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
// This for saving Time and space....
int powerA1(int m, int n)
{
    if (n == 0)
    {
        return 1;
    }
    if (n % 2 == 0)
    {
        return powerA1(m * m, n / 2);
    }
    else
    {
        return powerA1(m * m, (n - 1) / 2) * m;
    }
}

int main()
{
    cout << power(2, 5) << endl;
    cout << powerA1(2, 5);
    return 0;
}
#include <iostream>
using namespace std;

int fib(int x)
{
    // static int s = 0;
    if (x == 0 || x == 1)
    {
        return x;
    }
    else
    {
        return fib(x - 1) + fib(x - 2);
    }
}

// Memoization....
int F[10] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1};

int fib1(int x)
{
    if (x <= 1)
    {
        F[x] = x;
        return x;
    }
    else
    {
        if (F[x - 2] == -1)
        {
            F[x - 2] = fib1(x - 2);
        }
        if (F[x - 1] == -1)
        {
            F[x - 1] = fib1(x - 1);
        }
        F[x] = F[x - 2] + F[x - 1];
        return F[x];
    }
}

int main()
{
    cout << fib(7) << endl;
    cout << fib1(7);
    return 0;
}
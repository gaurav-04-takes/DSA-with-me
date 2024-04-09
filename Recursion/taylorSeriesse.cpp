#include <iostream>
using namespace std;

double e(int x, int n)
{
    static double p = 1, f = 1;
    double r;
    if (n == 0)
    {
        return 1;
    }
    else
    {
        r = e(x, n - 1);
        p = p * x;
        f = f * n;
        return r + p / f;
    }
}

// Byy harmers method which required linear time
// By loop
double e1(int x, int n)
{
    double s = 1;
    for (; n > 0; n--)
    {
        s = 1 + (x * s) / n;
    }
    return s;
}

// by recursion

double e2(int x, int n)
{
    static double s = 1;
    if (n == 0)
    {
        return s;
    }
    else
    {
        s = 1 + (x * s) / n;
        return e2(x, n - 1);
    }
}

int main()
{
    cout << e(1, 10) << endl;
    cout << e1(1, 10) << endl;
    cout << e2(1, 10);
    return 0;
}
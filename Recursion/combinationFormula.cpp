#include <iostream>
using namespace std;

int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return fact(n - 1) * n;
    }
}

int combination(int n, int r)
{
    int t1;
    int t2;
    int t3;
    t1 = fact(n);
    t2 = fact(r);
    t3 = fact(n - r);
    return t1 / (t2 * t3);
}

// using pascal trangle

int combinationPascal(int n, int r)
{
    if (r == 0 || n == r)
    {
        return 1;
    }
    else
    {
        return combinationPascal(n - 1, r - 1) + combinationPascal(n - 1, r);
    }
}

int main()
{
    cout << combination(5, 1) << endl;
    cout << combinationPascal(5, 1);
    return 0;
}
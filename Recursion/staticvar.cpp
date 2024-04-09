#include <iostream>
using namespace std;

int func1(int x)
{
    if (x > 0)
    {
        return func1(x - 1) + x;
    }
    return 0;
}

int func2(int n)
{
    if (n > 0)
    {
        static int x = 0;
        x++;
        return func2(n - 1) + x;
    }
    return 0;
}

int main()
{
    int x = 5;
    // cout << func1(x) << endl;
    cout << func2(x) << endl;
    return 0;
}
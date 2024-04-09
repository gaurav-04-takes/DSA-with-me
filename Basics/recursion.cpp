#include <iostream>
using namespace std;

void rec()
{
    cout << "hello" << endl;
    rec();
}

int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}

int main()
{
    cout << fact(5) << endl;
    return 0;
}
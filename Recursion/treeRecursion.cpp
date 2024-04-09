#include <iostream>
using namespace std;

void func(int x)
{
    if (x > 0)
    {
        cout << x << " ";
        func(x - 1);
        func(x - 1);
    }
}
int main()
{
    func(3);
    return 0;
}
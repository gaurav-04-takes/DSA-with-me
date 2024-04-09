#include <iostream>
using namespace std;

class TriDig
{
    int n;
    int *A;

public:
    TriDig()
    {
        n = 2;
        A = new int[2];
    }
    TriDig(int n)
    {
        this->n = n;
        A = new int[n];
    }
    void set(int i, int j, int x);
    int get(int i, int j);
    void display();
};

void TriDig::set(int i, int j, int x)
{
    if (i - j == 1)
    {
        A[i - 2] = x;
    }
    else if (i - j == 0)
    {
        A[(n - 1) + i - 1] = x;
    }
    else if (i - j == -1)
    {
        A[(2 * n - 1) + i - 1] = x;
    }
}
int TriDig::get(int i, int j)
{
    if (i - j == 1)
    {
        return A[i - 2];
    }
    else if (i - j == 0)
    {
        return A[(n - 1) + i - 1];
    }
    else if (i - j == -1)
    {
        return A[(2 * n - 1) + i - 1];
    }
    else
        return 0;
}

void TriDig::display()
{
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i - j == 1)
            {
                cout << A[i - 2] << " ";
            }
            else if (i - j == 0)
            {
                cout << A[(n - 1) + i - 1] << " ";
            }
            else if (i - j == -1)
            {
                cout << A[(2 * n - 1) + i - 1] << " ";
            }
            else
            {
                cout << "0 ";
            }
        }
        cout << endl;
    }
}
int main()
{
    TriDig t{5};
    t.set(1, 1, 11);
    t.set(2, 1, 21);
    t.set(3, 2, 32);
    t.set(2, 2, 22);
    t.set(3, 3, 33);
    t.set(4, 4, 44);
    t.set(5, 5, 55);
    t.set(4, 3, 43);
    t.set(5, 4, 54);
    t.set(1, 2, 12);
    t.set(2, 3, 23);
    t.set(3, 4, 34);
    t.set(4, 5, 45);

    cout << t.get(3, 4) << endl;
    t.display();

    return 0;
}
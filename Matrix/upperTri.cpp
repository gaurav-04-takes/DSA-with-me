#include <iostream>
using namespace std;

class UpperTri
{
    int n;
    int *A;

public:
    UpperTri()
    {
        n = 2;
        A = new int[2];
    }
    UpperTri(int n)
    {
        this->n = n;
        A = new int[n];
    }
    void set(int i, int j, int x);
    int get(int i, int j);
    void display();
};

void UpperTri::set(int i, int j, int x)
{
    if (i <= j)
    {
        A[(j * (j - 1) / 2) + i - 1] = x;
    }
}

int UpperTri::get(int i, int j)
{
    if (i <= j)
    {
        return A[(j * (j - 1) / 2) + i - 1];
    }
    else
        return 0;
}

void UpperTri::display()
{
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i <= j)
            {
                cout << A[(j * (j - 1) / 2) + i - 1] << " ";
            }
            else
                cout << "0 ";
        }
        cout << endl;
    }
}

int main()
{
    UpperTri u{4};
    u.set(1, 1, 10);
    u.set(1, 2, 20);
    u.set(1, 3, 30);
    u.set(1, 4, 40);

    u.set(2, 2, 50);
    u.set(2, 3, 60);
    u.set(2, 4, 70);

    u.set(3, 3, 80);
    u.set(3, 4, 90);

    u.set(4, 4, 100);

    u.display();

    return 0;
}
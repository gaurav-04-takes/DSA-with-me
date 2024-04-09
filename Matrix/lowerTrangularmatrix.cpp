#include <iostream>
using namespace std;

class LowerTrangle
{
    int n;
    int *A;

public:
    LowerTrangle()
    {
        n = 2;
        A = new int[2];
    }
    LowerTrangle(int n)
    {
        this->n = n;
        A = new int[n];
    }
    ~LowerTrangle()
    {
        delete[] A;
    }
    void set(int i, int j, int x);
    int get(int i, int j);
    void display();
    int nNaturalNo(int n);
};

int LowerTrangle::nNaturalNo(int n)
{
    int naturalNo = 0;
    for (int i = 0; i <= n; i++)
    {
        naturalNo += i;
    }
    return naturalNo;
}

void LowerTrangle::set(int i, int j, int x)
{
    if (i >= j)
    {
        int location = (nNaturalNo(i) / 2) + j - 1;
        A[location] = x;
    }
}

int LowerTrangle::get(int i, int j)
{
    int location = (nNaturalNo(i) / 2) + j - 1;
    if (i >= j)
        return A[location];
    return 0;
}

void LowerTrangle::display()
{
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i >= j)
            {
                int location = (nNaturalNo(i) / 2) + j - 1;
                cout << A[location] << " ";
            }
            else
                cout << "0 ";
        }
        cout << endl;
    }
}

int main()
{
    LowerTrangle t{4};
    t.set(1, 1, 10);
    t.set(2, 1, 20);
    t.set(2, 2, 30);
    t.set(3, 1, 40);
    t.set(3, 2, 50);
    t.set(3, 3, 60);
    t.set(4, 1, 70);
    t.set(4, 2, 80);
    t.set(4, 3, 90);
    t.set(4, 4, 100);

    // cout << t.get(1, 1);
    t.display();

    cout << "Code run succesfully";

    return 0;
}
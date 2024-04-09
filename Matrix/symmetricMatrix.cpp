#include <iostream>
using namespace std;
class Symmetric
{
    int n;
    int *A;

public:
    Symmetric()
    {
        n = 2;
        A = new int[2];
    }
    Symmetric(int n)
    {
        this->n = n;
        A = new int[n];
    }
    ~Symmetric()
    {
        delete[] A;
    }
    void set(int i, int j, int x);
    int get(int i, int j);
    void display();
};

void Symmetric::set(int i, int j, int x)
{
    if (i >= j)
        A[(i * (i - 1) / 2) + j - 1] = x;
}
int Symmetric::get(int i, int j)
{
    if (i >= j)
        return A[(i * (i - 1) / 2) + j - 1];
    else
        return A[(j * (j - 1) / 2) + i - 1];
}
void Symmetric::display()
{
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i >= j)
            {
                cout << A[(i * (i - 1) / 2) + j - 1] << " ";
            }
            else
            {
                cout << A[(j * (j - 1) / 2) + i - 1] << " ";
            }
        }
        cout << endl;
    }
}
int main()
{
    Symmetric s{4};
    s.set(1, 1, 11);
    s.set(2, 1, 21);
    s.set(2, 2, 22);
    s.set(3, 1, 31);
    s.set(3, 2, 32);
    s.set(3, 3, 33);
    s.set(4, 1, 41);
    s.set(4, 2, 42);
    s.set(4, 3, 43);
    s.set(4, 4, 44);

    cout << s.get(1, 2) << endl;
    s.display();

    return 0;
}
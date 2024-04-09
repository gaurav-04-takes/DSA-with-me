#include <iostream>
using namespace std;

class Term
{
public:
    int coff;
    int pwr;
};

class Polynomial
{
    int n;
    Term *t;

public:
    void Create();
    void display();
    int calculate(); // if we know the value of x...
    int power(int n, int p);
};

void Polynomial::Create()
{
    cout << "Enter the no of non-zero Terms :";
    cin >> n;
    t = new Term[n];
    cout << "Enter coffeciant of Polynomial along with power :";
    for (int i = 0; i < n; i++)
    {
        cin >> t[i].coff >> t[i].pwr;
    }
}

void Polynomial::display()
{
    for (int i = 0; i < n; i++)
    {
        cout << t[i].coff << "x^" << t[i].pwr << " + ";
    }
}

int Polynomial::calculate()
{
    cout << "\nEnter the value of X :";
    int x, res = 0;
    cin >> x;
    for (int i = 0; i < n; i++)
    {
        res += t[i].coff * power(x, t[i].pwr);
    }
    return res;
}

int Polynomial::power(int n, int p)
{
    if (p == 0)
    {
        return 1;
    }
    else
    {
        return n * power(n, p - 1);
    }
}
int main()
{
    Polynomial p;
    p.Create();
    p.display();
    cout << p.calculate();

    return 0;
}
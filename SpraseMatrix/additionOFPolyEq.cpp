#include <iostream>
using namespace std;

class Term
{
public:
    int coff;
    int exp;
};

class Poly
{
    int n;
    Term *t;

public:
    void create();
    void display();
    Poly operator+(Poly p2);
};

void Poly::create()
{
    cout << "Enter total no. of non-zero terms :";
    cin >> n;
    t = new Term[n];
    cout << "Enter the terms as coffeciant and Exponential" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> t[i].coff >> t[i].exp;
    }
}
Poly Poly::operator+(Poly p2)
{
    Poly res;
    int i = 0;
    int j = 0;
    int k = 0;
    res.n = n + p2.n;
    res.t = new Term[res.n];
    // while () TODO: may be we need two nested loop and then we cheack exp of both poly and based on the result we add or proceed...
    while (i < n && j < p2.n)
    {
        if (t[i].exp == p2.t[j].exp)
        {
            res.t[k].coff = t[i].coff + p2.t[j++].coff;
            res.t[k++].exp = t[i++].exp;
        }
        else if (t[i].exp > p2.t[i].exp)
        {
            res.t[k++] = t[i++];
        }
        else
        {
            res.t[k++] = p2.t[j++];
        }
    }
    for (; i < n; i++)
    {

        res.t[k++] = t[i];
    }
    for (; j < p2.n; j++)
    {
        res.t[k++] = p2.t[j];
    }
    res.n = k;
    return res;
}

void Poly::display()
{
    for (int i = 0; i < n; i++)
    {
        cout << t[i].coff << "x^" << t[i].exp;
        if (i < n - 1)
        {
            cout << " + ";
        }
    }
}
int main()
{
    Poly p1, p2, p3;
    p1.create();
    p2.create();
    p3 = p1 + p2;
    // p1.display();
    // cout << endl;
    // p2.display();
    // cout << endl;
    p3.display();

    return 0;
}
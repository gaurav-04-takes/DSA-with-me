#include <iostream>
using namespace std;

class Element
{
public:
    int i, j, x;
};

class Sparse
{
    int m, n, num;
    Element *e;

public:
    void createSparse();
    void display();
};

void Sparse::createSparse()
{
    int p;
    cout << "Enter dimensions :";
    cin >> m >> n;
    cout << "\nEnter Total number of non-Zero element :";
    cin >> num;
    e = new Element[num];
    cout << "Enter all the non-zero element :\n";
    for (p = 0; p < num; p++)
    {
        cin >> e[p].i >> e[p].j >> e[p].x;
    }
}

void Sparse::display()
{
    int i, j, k = 0;
    for (i = 1; i <= m; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i == e[k].i && j == e[k].j)
            {
                cout << e[k++].x << " ";
            }
            else
                cout << "0 ";
        }
        cout << endl;
    }
}

int main()
{
    Sparse s;
    s.createSparse();
    s.display();
    return 0;
}
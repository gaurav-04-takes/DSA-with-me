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
    void addSparse(Sparse s1, Sparse s2);
    void display(Sparse s3);
};

void Sparse::createSparse()
{
    int i;
    cout << "Enter the dimensions :";
    cin >> m >> n;
    cout << "Enter total no. of non-zero element :";
    cin >> num;
    e = new Element[num];

    cout << "Enter the non-zero element :";
    for (i = 0; i < num; i++)
    {
        cin >> e[i].i >> e[i].j >> e[i].x;
    }
}

void Sparse::addSparse(Sparse s1, Sparse s2)
{
    if (s1.m != s2.n && s1.n != s2.n)
    {
        return;
    }
    Sparse s3;
    // s3=new Sparse;
    int k = 0, i = 0, j = 0;
    s3.m = s1.m;
    s3.n = s2.n;
    s3.num = s1.num + s2.num;
    cout << s3.m << " " << s3.n << " " << s3.num;
    s3.e = new Element[s3.num];
    cout << "Addition of two sparse matrix is :" << endl;
    while (i < s1.num && j < s2.num)
    {
        if (s1.e[i].i < s2.e[j].i)
        {
            s3.e[k++] = s1.e[i++];
        }
        else if (s1.e[i].i > s2.e[j].i)
        {
            s3.e[k++] = s2.e[j++];
        }
        else
        {
            if (s1.e[i].j < s2.e[j].j)
                s3.e[k++] = s1.e[i++];
            else if (s1.e[i].j > s2.e[j].j)
                s3.e[k++] = s2.e[j++];
            else
                s3.e[k] = s1.e[i++];
            s3.e[k++].x += s2.e[j++].x;
        }
    }
    for (; i < s1.num; i++)
        s3.e[k++] = e[i++];
    for (; j < s2.num; j++)
        s3.e[k++] = e[j++];
    cout << "yeee";

    display(s3);
}

void Sparse::display(Sparse s3)
{

    int i, j, k = 0;
    for (i = 1; i <= s3.m; i++)
    {
        for (j = 1; j <= s3.n; j++)
        {
            if (i == s3.e[k].i && j == s3.e[k].j)
            {
                cout << s3.e[k++].x << " ";
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
    Sparse s1, s2, s3;
    s1.createSparse();
    s2.createSparse();
    s3.addSparse(s1, s2);
    // s3.display(s1);
    // s3.display(s2);
    // s3.display(s3);
    return 0;
}
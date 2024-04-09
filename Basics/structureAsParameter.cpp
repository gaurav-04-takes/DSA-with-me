#include <iostream>
using namespace std;

struct Rectangle
{
public:
    int length;
    int breadth;
};

int area(struct Rectangle r1)
{
    cout << ++r1.length << endl;
    return r1.length * r1.breadth;
}

void changeLength(struct Rectangle *p)
{
    p->length = 20;
}

struct Rectangle *heap()
{
    struct Rectangle *p;
    p = new Rectangle;
    p->breadth = 40;
    p->length = 33;
    cout << p->length << endl;
    return p;
}

int main()
{
    struct Rectangle r = {10, 5};
    cout << "Area of rectangle :" << area(r) << endl;

    cout << "Before :" << r.length << endl;
    changeLength(&r);
    cout << "Before :" << r.length << endl;

    // heap

    struct Rectangle *ptr = heap();
    cout << ptr->breadth << endl;
    return 0;
}
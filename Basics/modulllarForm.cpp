#include <iostream>
using namespace std;

class Rectangle
{
    int length;
    int breadth;

public:
    Rectangle()
    {
        length = breadth = 1;
    }
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }
    int area();
    int perimeter();
    int getlength()
    {
        return length;
    }
    void setlength(int l)
    {
        length = l;
    }

    ~Rectangle();
};

// Rectangle::Rectangle(10,5);

int Rectangle::area()
{
    return length * breadth;
}

int Rectangle::perimeter()
{
    return 2 * (length + breadth);
}

Rectangle::~Rectangle()
{
    cout << "I am distructor";
}

int main()
{
    Rectangle r(10, 5);
    cout << r.area() << endl;
    cout << r.perimeter() << endl;
    r.setlength(55);
    cout << r.getlength() << endl;
    return 0;
}
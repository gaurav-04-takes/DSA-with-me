#include <iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

int main()
{
    struct Rectangle r = {10, 5};
    struct Rectangle *ptr = &r;

    cout << "Length :" << (*ptr).length << endl
         << "Breadth :" << ptr->breadth << endl;//Both the syntax is work fine...

    

    return 0;
}
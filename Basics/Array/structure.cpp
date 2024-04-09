#include <iostream>
using namespace std;

struct Student
{
    int rollNo;
    string name[15];
};

struct Card
{
    int face;
    int shape;
    int color;
};
int main()
{

    struct Student s = {42, "Gaurav"};
    cout << s.rollNo << endl
         << s.name[0] << endl;

    struct Card deck[52] = {{1, 0, 0}, {1, 1, 1}}; // creating arrays of structures...
    cout << deck->color << endl
         << deck->face << endl
         << deck->shape << endl;



         
    return 0;
}
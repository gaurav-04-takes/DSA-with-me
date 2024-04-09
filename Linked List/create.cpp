#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
} *first = NULL;

class LinkedList
{
    Node *t, *last;

public:
    void create(int A[], int n);
    void display(Node *p);
    int countNode(Node *p);
    int sumNodeData(Node *p);
};

void LinkedList::create(int A[], int n)
{
    first = new Node;
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (int i = 1; i < n; i++)
    {
        t = new Node;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void LinkedList::display(Node *p)
{
    while (p)
    {
        cout << p->data << " ";
        p = p->next;
    }
}

int LinkedList::countNode(Node *p)
{
    int count = 0;
    while (p)
    {
        count++;
        p = p->next;
    }
    return count;
}

int LinkedList::sumNodeData(Node *p)
{
    int sum = 0;
    while (p != NULL)
    {
        sum += p->data;
        p = p->next;
    }
    return sum;
}
int main()
{
    int A[] = {2, 4, 6, 8, 10};
    LinkedList l;
    l.create(A, 5);
    l.display(first);
    cout << endl;
    cout << "Total Number of Node is :" << l.countNode(first) << endl;
    cout << "Sum of Data of Each Node :" << l.sumNodeData(first) << endl;
    cout << "\nhello";
    return 0;
}
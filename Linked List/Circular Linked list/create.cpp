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
    Node *last, *t;

public:
    void create(int A[], int n);
    void display();
};

void LinkedList::create(int A[], int n)
{
    first = new Node;
    first->data = A[0];
    first->next = NULL;
    last = first;
    // last->next = first;
    for (int i = 1; i < n; i++)
    {
        t = new Node;
        t->data = A[i];
        t->next = first;
        last->next = t;
        last = t;
    }
}

void LinkedList::display()
{
    Node *p = first;
    cout << p->data << " ";
    p = p->next;
    while (p != first)
    {
        cout << p->data << " ";
        p = p->next;
    }
}
int main()
{
    int A[] = {2, 4, 6, 8};
    int n = sizeof(A) / sizeof(A[0]);
    LinkedList l;
    l.create(A, n);
    l.display();
    return 0;
}
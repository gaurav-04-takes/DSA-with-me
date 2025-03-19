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
    Node *last;

public:
    void create(int A[], int n);
    void display(Node *p);
};

void LinkedList::create(int A[], int n)
{
    first = new Node;
    last = new Node;
    first->data = A[0];
    first->next = NULL;
    last = first;
    for (int i = 1; i < n; i++)
    {
        Node *t = new Node;
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

int main()
{
    LinkedList l;
    int A[] = {2, 4, 6, 8};
    int n = sizeof(A) / sizeof(A[0]);
    l.create(A, n);
    l.display(first);
    return 0;
}
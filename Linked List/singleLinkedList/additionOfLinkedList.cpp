#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
} *first = NULL, *second = NULL, *third = NULL;

class LinkedList
{
    Node *t, *last;

public:
    void create(int A[], int n);
    void display(Node *p);
    void create2(int A[], int n);
    void merge(Node *p, Node *q);
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

void LinkedList::create2(int A[], int n)
{
    second = new Node;
    second->data = A[0];
    second->next = NULL;
    last = second;

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
    // cout << p->next->next << " ";
    while (p)
    {
        cout << p->data << " ";
        p = p->next;
    }
}

void LinkedList::merge(Node *p, Node *q)
{
    Node *last;
    if (p->data > q->data)
    {
        third = q;
        last = q;
        q = q->next;
        last->next = NULL;
    }
    else
    {
        third = p;
        last = p;
        p = p->next;
        last->next = NULL;
    }

    while (p && q)
    {
        if (p->data > q->data)
        {
            last->next = q;
            last = q;
            q = q->next;
            last->next = NULL;
        }
        else
        {
            last->next = p;
            last = p;
            p = p->next;
            last->next = NULL;
        }
    }
    if (p)
    {
        last->next = p;
    }
    if (q)
    {
        last->next = q;
    }
}

int main()
{
    LinkedList l;
    int A[] = {2, 6, 8};
    int n = sizeof(A) / sizeof(A[0]);
    l.create(A, n);
    // l.display(first);
    cout << endl;
    int B[] = {1, 4, 5};
    n = sizeof(B) / sizeof(B[0]);
    l.create2(B, n);
    // l.display(second);
    cout << endl;
    l.merge(first, second);
    cout << "merge :" << endl;
    l.display(third);

    return 0;
}
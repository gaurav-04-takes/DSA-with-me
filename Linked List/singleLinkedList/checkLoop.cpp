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
    int checkLoop();
    void makeLoop();
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

void LinkedList::makeLoop()
{
    Node *p = first;
    while (p->next)
    {
        p = p->next;
    }
    p->next = first;
}

void LinkedList::display()
{
    Node *p = first;
    while (p)
    {
        cout << p->data << " ";
        p = p->next;
    }
}

int LinkedList::checkLoop()
{
    Node *p = first->next->next;
    Node *q = first;

    while (p)
    {
        if (p->next == q->next)
            return 1;
        else
        {
            p = p->next->next;
            q = q->next;
        }
    }
    return 0;
}

int main()
{
    int A[] = {2, 4, 6, 8};
    int n = sizeof(A) / sizeof(A[0]);
    LinkedList l;
    l.create(A, n);
    l.makeLoop();
    // l.display();
    if (l.checkLoop())
        cout << "there is loop in Linked List";
    else
        cout << "there is not a loop in Linked List";

    return 0;
}
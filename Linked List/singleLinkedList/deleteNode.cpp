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
    void deleteNode(Node *p, int index);
    int count(Node *p);
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
    // cout << p->next->next << " ";
    while (p)
    {
        cout << p->data << " ";
        p = p->next;
    }
}

int LinkedList::count(Node *p)
{
    int count = 0;
    while (p)
    {
        count++;
        p = p->next;
    }
    return count;
}

void LinkedList::deleteNode(Node *p, int index)
{
    if (index == 0)
    {
        first = p->next;
        delete p;
    }
    else
    {
        Node *pptr;
        pptr = new Node;

        for (int i = 1; i < index && p; i++)
        {
            pptr = p;
            p = p->next;
        }

        pptr->next = p->next;
        delete p;
    }
}

int main()
{

    int A[] = {2, 7, 4, 8, 12};
    int n = sizeof(A) / sizeof(A[0]);
    LinkedList l;
    l.create(A, n);
    l.deleteNode(first, 4);
    l.display(first);
    return 0;
}
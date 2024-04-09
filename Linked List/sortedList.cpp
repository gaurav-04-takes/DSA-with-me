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
    int isSorted(Node *p);
    void removeDuplicates(Node *p);
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
    cout << endl;
}
int LinkedList::isSorted(Node *p)
{
    Node *pptr = p;
    p = p->next;
    while (p)
    {
        if (pptr->data > p->data)
        {
            return 0;
        }
        pptr = p;
        p = p->next;
    }
    return 1;
}

void LinkedList::removeDuplicates(Node *p)
{
    Node *pptr;
    pptr = p;
    p = p->next;
    while (p)
    {
        if (pptr->data == p->data)
        {
            pptr->next = p->next;
            delete p;
            p = pptr->next;
        }
        else
        {
            pptr = p;
            p = p->next;
        }
    }
}

int main()
{
    int A[] = {2, 2, 5, 5, 5, 8, 8};
    int n = sizeof(A) / sizeof(A[0]);
    LinkedList l;
    l.create(A, n);
    l.display(first);
    l.removeDuplicates(first);
    l.display(first);

    // if (l.isSorted(first))
    //     cout << "Linked List is Sorted";
    // else
    //     cout << "Linked list is not sorted";
    return 0;
}
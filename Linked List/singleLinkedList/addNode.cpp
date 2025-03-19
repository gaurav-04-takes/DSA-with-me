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
    void addNOdeAtBeginning(int n);
    void addNodeAtlast(Node *p, int n);
    int maxElement(Node *p);
    void addAfterNode(Node *p, int target, int key);
    void addBeforeNode(Node *p, int target, int key);
    void addNodeInSortedList(Node *p, int n);
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
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
}

void LinkedList::addNOdeAtBeginning(int n)
{
    t = new Node;
    t->data = n;
    t->next = first;
    first = t;
}

void LinkedList::addNodeAtlast(Node *p, int n)
{
    t = new Node;
    t->data = n;
    t->next = NULL;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = t;
}

int LinkedList::maxElement(Node *p)
{
    int temp = p->data;
    while (p)
    {
        if (temp < p->data)
        {
            temp = p->data;
        }
        p = p->next;
    }
    return temp;
}

void LinkedList::addAfterNode(Node *p, int target, int key)
{
    Node *t, *pptr;
    t = new Node;
    t->next = NULL;
    t->data = key;
    while (p->data != target)
    {
        pptr = p;
        p = p->next;
    }
    pptr = p;
    p = p->next;
    pptr->next = t;
    t->next = p;
}

void LinkedList::addBeforeNode(Node *p, int target, int key)
{
    Node *t, *pptr;
    t = new Node;
    t->data = key;
    t->next = NULL;
    while (p->data != target)
    {
        pptr = p;
        p = p->next;
    }
    pptr->next = t;
    t->next = p;
}

void LinkedList::addNodeInSortedList(Node *p, int n)
{
    Node *pptr, *t;
    t = new Node;
    t->data = n;
    if (first == NULL)
        first = t; // if there is no node created then this will handel the thia issue
    else
    {
        while (p && p->data < n)
        {
            pptr = p;
            p = p->next;
        }
        if (p == first)
        {
            t->next = first; // if we have to add the node in the start
            first = t;
        }
        else
        {
            t->next = pptr->next;
            pptr->next = t;
        }
    }
}
int main()
{
    int A[] = {2, 4, 6, 7, 8, 10, 15};

    LinkedList l;
    l.create(A, sizeof(A) / sizeof(A[0]));
    l.display(first);
    cout << endl;
    // l.addNOdeAtBeginning(1);
    // l.display(first);
    // cout << endl;
    // l.addNodeAtlast(first, 15);
    // l.display(first);
    // cout << endl;

    // cout << l.maxElement(first) << endl;

    // l.addAfterNode(first, 8, 9);
    // l.addAfterNode(first, 4, 5);

    // l.display(first);
    // cout << endl;

    // l.addBeforeNode(first, 4, 3);
    // l.display(first);

    l.addNodeInSortedList(first, 12);
    l.addNodeInSortedList(first, 1);

    l.display(first);
    return 0;
}
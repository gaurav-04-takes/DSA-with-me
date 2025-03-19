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
    // reverse by changing element
    void reverseElement(Node *p);
    int countNode(Node *p);
    // reverse by changing element
    void reverseLinkes(Node *p);
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

void LinkedList::reverseElement(Node *p)
{
    int A[10], i;
    for (i = 0; i < countNode(first); i++)
    {
        A[i] = p->data;
        p = p->next;
    }
    p = first;
    for (i = countNode(first) - 1; i >= 0; i--)
    {
        p->data = A[i];
        p = p->next;
    }
}

void LinkedList::reverseLinkes(Node *p)
{
    Node *q, *r;
    q = NULL;
    r = NULL;
    while (p)
    {
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
    first = q;
}
int main()
{
    LinkedList l;
    int A[] = {2, 5, 63, 3};
    int n = sizeof(A) / sizeof(A[0]);
    l.create(A, n);
    // l.display(first);
    cout << endl;
    // l.reverseElement(first);
    // l.display(first);
    l.reverseLinkes(first);
    l.display(first);

    return 0;
}
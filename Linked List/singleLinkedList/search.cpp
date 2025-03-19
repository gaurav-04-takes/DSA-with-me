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
    void display(Node *p);
    int linearSearch(Node *p, int n);
    int transposeLinearSearch(Node *p, int n);
    int moveToHeadLinearSearch(Node *p, int n);
    int moveTheToHeadNode(Node *p, int n);
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

int LinkedList::linearSearch(Node *p, int n)
{
    while (p)
    {
        if (p->data == n)
        {
            return 1;
        }
        p = p->next;
    }
    return 0;
}

int LinkedList::transposeLinearSearch(Node *p, int n)
{
    Node *t;
    int temp;
    t = new Node;
    while (p)
    {
        if (p->data == n)
        {
            temp = t->data;
            t->data = p->data;
            p->data = temp;
            return 1;
        }
        t = p;
        p = p->next;
    }
    return 0;
}

int LinkedList::moveToHeadLinearSearch(Node *p, int n)
{
    int temp;
    while (p)
    {
        if (p->data == n)
        {
            temp = first->data;
            first->data = p->data;
            p->data = temp;
            return 1;
        }
        p = p->next;
    }
    return 0;
}

int LinkedList::moveTheToHeadNode(Node *p, int n)
{
    Node *pptr = NULL;
    while (p)
    {
        if (p->data == n)
        {
            pptr->next = p->next;
            p->next = first;
            first = p;

            return 1;
        }
        pptr = p;
        p = p->next;
    }
    return 0;
}

int main()
{
    int A[] = {2, 59, 67, 86, 99};
    LinkedList l;
    int n = sizeof(A) / sizeof(A[0]);
    l.create(A, n);
    l.display(first);
    cout << endl;
    // if (l.linearSearch(first, 99))
    // {
    //     cout << "element found :";
    // }
    // else
    // {
    //     cout << "element not found";
    // }

    // if (l.transposeLinearSearch(first, 80))
    // {
    //     cout << "element found :";
    // }
    // else
    // {
    //     cout << "element not found :";
    // }
    // l.display(first);
    // cout << endl;

    // if (l.moveToHeadLinearSearch(first, 2))
    // {
    //     cout << "element found :";
    // }
    // else
    // {
    //     cout << "element not found :";
    // }
    // l.display(first);
    // cout << endl;
    if (l.moveTheToHeadNode(first, 86))
    {
        cout << "element found :";
    }
    else
    {
        cout << "element not found :";
    }
    l.display(first);
    cout << endl;
}
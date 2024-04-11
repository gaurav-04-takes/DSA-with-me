#include <iostream>
using namespace std;

class Node
{
public:
    Node *prev;
    int data;
    Node *next;
} *head = NULL;

class LinkedList
{
    Node *last, *t;

public:
    void create(int A[], int n);
    void display();
    void insert(int index, int n);
    void Delete(int index);
    int length();
};

int LinkedList::length()
{
    Node *p = head;
    int length = 0;
    while (p)
    {
        length++;
        p = p->next;
    }
    return length;
}

void LinkedList::create(int A[], int n)
{
    head = new Node;
    head->prev = NULL;
    head->next = NULL;
    head->data = A[0];
    last = head;
    for (int i = 1; i < n; i++)
    {
        t = new Node;
        t->data = A[i];
        t->prev = last;
        t->next = last->next;
        last->next = t;
        last = t;
    }
}

void LinkedList::display()
{
    Node *p = head;
    while (p)
    {
        cout << p->data << " ";
        p = p->next;
    }
}

void LinkedList::insert(int index, int n)
{
    Node *p = head;

    if (!p)
    {
        head = new Node;
        head->prev = NULL;
        head->next = NULL;
        head->data = n;
        last = head;
    }
    else
    {
        t = new Node;
        t->data = n;
        if (index == 1)
        {
            t->prev = NULL;
            t->next = head;
            head->prev = t;
            head = t;
        }
        else
        {
            if (index < 0 || index > length())
                return;
            else
            {
                for (int i = 1; i < index - 1; i++)
                {
                    p = p->next;
                }
                t->next = p->next;
                t->prev = p;
                p->next->prev = t;
                p->next = t;
                // t->prev = p->prev;
                // p->prev->next = t;
                // t->next = p;
            }
        }
    }
}

int main()
{
    int A[] = {2, 4, 6, 8};
    int n = sizeof(A) / sizeof(A[0]);
    LinkedList l;
    l.create(A, n);
    l.display();
    cout << endl;
    l.insert(3, 1);
    l.display();
    cout << endl;

    return 0;
}
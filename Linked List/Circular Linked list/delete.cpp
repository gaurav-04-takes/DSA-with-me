#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
} *head = NULL;

class LinkedList
{
    Node *last, *t;

public:
    void create(int A[0], int n);
    void display();
    void insert(int index, int n);
};

void LinkedList::create(int A[], int n)
{
    head = new Node;
    head->data = A[0];
    head->next = head;
    last = head;

    for (int i = 1; i < n; i++)
    {
        t = new Node;
        t->data = A[i];
        t->next = head;
        last->next = t;
        last = t;
    }
}

void LinkedList::display()
{
    Node *p = head;
    cout << p->data << " ";
    p = p->next;
    while (p != head)
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
        head->data = n;
        head->next = head;
        last = head;
    }
    else
    {
        t = new Node;
        t->data = n;
        if (index == 1)
        {

            while (p->next != head)
            {
                p = p->next;
            }
            t->next = head;
            p->next = t;
            head = t;
        }
        else
        {
            int count = 0;
            Node *q = head;
            while (p->next != head)
            {
                if (count == index - 1)
                {
                    t->next = q->next;
                    q->next = t;
                    return;
                }
                else
                {
                    count++;
                    q = p;
                    p = p->next;
                }
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
    l.insert(1, 1);
    l.display();
    return 0;
}
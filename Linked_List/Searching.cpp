#include <cstdio>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct Node
{
    int data;
    struct Node *next;
} * first;

void create(int A[], int n)
{
    int i;
    struct Node *t, *last;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (int i = 1; i < n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void Rdisplay(struct Node *p)
{
    if (p != 0)
    {
        printf("%d ", p->data);
        Rdisplay(p->next);
    }
}

struct Node *Lsearch(struct Node *p, int key)
{
    struct Node *q = NULL;
    while (p != 0)
    {
        if (key == p->data)
        {
            q->next = p->next;
            p->next = first;
            first = p;
            return p;
        }
        q = p;
        p = p->next;
    }
    return 0;
}

struct Node *Rsearch(struct Node *p, int key)
{
    if (p == NULL)
    {
        return NULL;
    }
    if (key == p->data)
    {
        return p;
    }
    p = p->next;
    return Rsearch(p->next, key);
}

int main()
{
    struct Node *value;
    int arr[] = {2, 5, 7, 10, 13};

    create(arr, 5);
    Rdisplay(first);

    value = Lsearch(first, 7);
    if (value != 0)
    {
        cout << endl
             << "key is found " << value->data << endl;
    }
    else
    {
        cout << "Key not found" << endl;
    }

    Rdisplay(first);

    value = Rsearch(first, 13);
    if (value != 0)
    {
        cout << endl
             << "key is found " << value->data << endl;
    }
    else
    {
        cout << "Key not found" << endl;
    }

    Rdisplay(first);

    return 0;
}
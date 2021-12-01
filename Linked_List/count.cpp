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

int count(struct Node *p)
{
    int c = 0;
    while (p != 0)
    {
        c++;
        p = p->next;
    }
    return c;
}

void insert(struct Node *p, int pos, int x)
{
    Node *t;
    if (pos <= -1 || pos > count(p))
    {
        return;
    }
    t = new Node;
    t->data = x;
    if (pos == 0)
    {
        t->next = first;
        first = t;
    }
    else
    {
        p = first;
        for (int i = 0; i < pos - 1; i++)
        {
            p = p->next;
        }
        if (p != 0)
        {
            t->next = p->next;
            p->next = t;
        }
    }
}

int main()
{
    int arr[] = {2, 5, 7, 10, 13, 8, 16, 31, 3, 19};

    create(arr, 10);
    Rdisplay(first);
    cout << endl;
    insert(first, 0, 33);
    Rdisplay(first);
    cout << endl;
    insert(first, 7, 6);
    Rdisplay(first);

    return 0;
}
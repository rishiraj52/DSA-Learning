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

    for (int i = 0; i < n; i++)
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

int Delete(struct Node *p, int index)
{
    struct Node *q;
    int x = -1;

    if (index < 1 || index > count(p))
    {
        return -1;
    }
    if (index == 1)
    {
        q = first;
        x = first->data;
        first = first->next;
        delete q;
        return x;
    }
    else
    {
        for (int i = 0; i < index - 1; i++)
        {
            q = p;
            p = p->next;
        }
        q->next = p->next;
        x = p->data;
        delete p;
        return x;
    }
}

int main()
{
    int arr[] = {2, 5, 7, 10, 13, 17, 22, 25, 52};

    create(arr, 9);
    Rdisplay(first);

    cout << endl;

    Delete(first, 15);
    Rdisplay(first);

    cout << endl;

    Delete(first, 5);
    Rdisplay(first);

    cout << endl;

    Delete(first, 2);
    Rdisplay(first);

    return 0;
}
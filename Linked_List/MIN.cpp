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

int min(struct Node *p)
{
    int min = INT32_MAX;
    while (p != 0)
    {
        if (p->data < min)
        {
            min = p->data;
        }

        p = p->next;
    }
    return min;
}

int Rmin(struct Node *p)
{
    int x = 0;
    if (p == 0)
    {
        return INT32_MAX;
    }
    x = Rmin(p->next);
    if (x < p->data)
    {
        return x;
    }
    else
    {
        return p->data;
    }
}

int main()
{
    int arr[] = {5, 7, 10, 2, 13, 8, 16, 31, 3, 19};

    create(arr, 9);
    Rdisplay(first);
    cout << endl;
    cout << min(first) << endl;
    cout << Rmin(first);

    return 0;
}
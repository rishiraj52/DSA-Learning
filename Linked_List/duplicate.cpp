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

void display(struct Node *p)
{
    while (p != 0)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}

void duplicate(struct Node *p)
{
    struct Node *q = p->next;

    while (q != 0)
    {
        if (p->data != q->data)
        {
            p = q;
            q = q->next;
        }
        else
        {
            cout << "\nDuplicate element present in sorted LL is: " << p->data;
            p->next = q->next;
            delete q;
            q = p->next;
        }
    }
}

int main()
{

    int arr[] = {2, 5, 7, 7, 13, 15, 18, 18, 18, 25};
    create(arr, 10);
    display(first);

    duplicate(first);
    cout << endl;
    display(first);

    return 0;
}
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

int Add(struct Node *p)
{
    int sum = 0;
    while (p != 0)
    {
        sum = sum + p->data;
        p = p->next;
    }
    return sum;
}

int RAdd(struct Node *p)
{
    if (p == 0)
    {
        return 0;
    }
        else
        {
            return RAdd(p->next)+p->data;
        }
}

int main()
{
    int arr[] = {2, 5, 7, 10, 13};

    create(arr, 5);
    Rdisplay(first);
    cout << endl;
    cout << Add(first) << endl;
    cout << RAdd(first);

    return 0;
}
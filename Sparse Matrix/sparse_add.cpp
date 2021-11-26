#include <cstdio>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct element
{
    int i;
    int j;
    int x;
};

struct sparse
{
    int m;
    int n;
    int num;
    struct element *elem;
};

void create(struct sparse *s)
{
    cout << "Enter Dimensions" << endl;
    scanf("%d", &s->m);
    scanf("%d", &s->n);
    cout << endl
         << "Enter the number of non-zero elements" << endl;
    scanf("%d", &s->num);

    s->elem = (struct element *)malloc(s->num * sizeof(struct element));
    cout << "Enter all non-zero elements" << endl;
    for (int i = 0; i < s->num; i++)
    {
        scanf("%d %d %d", &s->elem[i].i, &s->elem[i].j, &s->elem[i].x);
    }
}

void display(struct sparse s)
{
    int k = 0;
    for (int i = 0; i < s.m; i++)
    {
        for (int j = 0; j < s.n; j++)
        {
            if (i == s.elem[k].i && j == s.elem[k].j)
            {
                printf("%d ", s.elem[k++].x);
            }
            else
            {
                printf("0 ");
            }
        }
        cout << endl;
    }
}

struct sparse *add(struct sparse *s1, struct sparse *s2)
{
    struct sparse *sum;
    int i, j, k;
    i = j = k = 0;

    sum = (struct sparse *)malloc(sizeof(struct sparse));
    sum->elem = (struct element *)malloc((s1->num + s2->num) * sizeof(struct element));

    while (i < s1->num && j < s2->num)
    {
        if (s1->elem[i].i < s2->elem[j].i)
        {
            sum->elem[k++] = s1->elem[i++];
        }
        else if (s1->elem[i].i > s2->elem[j].i)
        {
            sum->elem[k++] = s1->elem[j++];
        }
        else
        {
            if (s1->elem[i].i < s2->elem[j].i)
            {
                sum->elem[k++] = s1->elem[i++];
            }
            else if (s1->elem[i].i > s2->elem[j].i)
            {
                sum->elem[k++] = s1->elem[j++];
            }
            else
            {
                sum->elem[k] = s1->elem[i];
                sum->elem[k++].x = s1->elem[i++].x + s2->elem[j++].x;
            }
        }
    }
    for (; i < s1->num; i++)
    {
        sum->elem[k++]=s1->elem[i];
    }
    for (; j < s2->num; j++)
    {
        sum->elem[k++]=s1->elem[j];
    }
    sum->m=s1->m;
    sum->n=s1->n;
    sum->num=k;
    
    
};

int main()
{
    struct sparse s1, s2, *s3;

    create(&s1);
    create(&s2);

    s3=add(&s1, &s2);

    printf("First Matrix\n");
    display(s1);
    printf("Second Matrix\n");
    display(s2);
    printf("Sum Matrix\n");
    display(*s3);
}
#include <cstdio>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct term
{
    int coeff;
    int exp;
};

struct poly
{
    int n;
    struct term *terms;
};

void create(struct poly *p)
{
    printf("No. of terms?\n");
    scanf("%d", &p->n);
    p->terms = (struct term *)malloc(p->n * sizeof(struct term));

    printf("Enter terms\n");
    for (int i = 0; i < p->n; i++)
    {
        scanf("%d %d", &p->terms[i].coeff, &p->terms[i].exp);
    }
}

void display(struct poly p)
{
    for (int i = 0; i < p.n; i++)
    {
        printf("%dx%d+", p.terms[i].coeff, p.terms[i].exp);
    }
    printf("\n");
}

struct poly *add(struct poly *p1, struct poly *p2)
{
    int i, j, k;
    i = j = k = 0;

    struct poly *sum;
    sum = (struct poly *)malloc(sizeof(struct poly));
    sum->terms = (struct term *)malloc((p1->n + p2->n) * sizeof(struct term));

    while (i < p1->n && j < p2->n)
    {
        if (p1->terms[i].exp > p2->terms[j].exp)
        {
            sum->terms[k++] = p1->terms[i++];
        }
        else if (p1->terms[i].exp < p2->terms[j].exp)
        {
            sum->terms[k++] = p2->terms[j++];
        }
        else
        {
            sum->terms[k].exp = p1->terms[i].exp;
            sum->terms[k++].coeff = p1->terms[i++].coeff + p2->terms[j++].coeff;
        }
    }
    for (; i < p1->n; i++)
    {
        sum->terms[k++] = p1->terms[i];
    }
    for (; j < p2->n; j++)
    {
        sum->terms[k++] = p2->terms[j];
    }

    sum->n = k;
    return sum;
}

int main()
{
    struct poly p1, p2, *p3;

    create(&p1);
    create(&p2);

    p3 = add(&p1, &p2);

    printf("First polynomial: \n");
    display(p1);
    printf("\n");
    printf("Second polynomial: \n");
    display(p2);
    printf("\n");

    printf("Sum of both polynomials polynomial: \n");
    display(*p3);

    return 0;
}
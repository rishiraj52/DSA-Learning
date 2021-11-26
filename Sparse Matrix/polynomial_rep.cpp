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
    struct term *t;
};

int main()
{
    struct poly p;
    printf("No. of non-zero elements\n");
    scanf("%d", &p.n);
    p.t = new term[p.n];
    printf("Enter polynomial terms\n");
    for (int i = 0; i < p.n; i++)
    {
        printf("Term number = %d\n", i + 1);
        scanf("%d %d", &p.t[i].coeff, &p.t[i].exp);
    }
    return 0;
}
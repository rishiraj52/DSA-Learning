#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

// Lower triangle
// row-major form
struct rowmatrix
{
    int *A;
    int n;
};

void setrow(struct rowmatrix *m, int i, int j, int x)
{
    if (i >= j)
    {
        m->A[i * (i - 1) / 2 + (j - 1)] = x;
    }
}

int getrow(struct rowmatrix m, int i, int j)
{
    if (i >= j)
    {
        return m.A[i * (i - 1) / 2 + (j - 1)];
    }
    return 0;
}

void displayrow(struct rowmatrix m)
{
    for (int i = 1; i <= m.n; i++)
    {
        for (int j = 1; j <= m.n; j++)
        {
            if (i >= j)
            {
                printf("%d ", m.A[(i * (i - 1) / 2) + (j - 1)]);
            }
            else
            {
                printf("0 ");
            }
        }
        printf("\n");
    }
}

// column major form
struct columnmatrix
{
    int *B;
    int o;
};

void setcolumn(struct columnmatrix *l, int i, int j, int y)
{
    if (i >= j)
    {
        l->B[l->o * (j - 1) + (j - 2) * (j - 1) / 2 + (i - j)] = y;
    }
}

int getcolumn(struct columnmatrix l, int i, int j)
{
    if (i >= j)
    {
        return l.B[l.o * (j - 1) + (j - 2) * (j - 1) / 2 + (i - j)];
    }
    return 0;
}

void displaycolumn(struct columnmatrix l)
{
    for (int i = 1; i <= l.o; i++)
    {
        for (int j = 1; j <= l.o; j++)
        {
            if (i >= j)
            {
                printf("%d ", l.B[l.o * (j - 1) + (j - 2) * (j - 1) / 2 + (i - j)]);
            }
            else
            {
                printf("0 ");
            }
        }
        printf("\n");
    }
}

int main()
{
    struct columnmatrix l;
    struct rowmatrix m;

    int x, y;

    // row
    printf("Enter dimension of row matrix: ");
    scanf("%d", &m.n);

    m.A = (int *)malloc(m.n * (m.n + 1) / 2 * sizeof(int));

    printf("Enter all the elements: \n");
    for (int i = 1; i <= m.n; i++)
    {
        for (int j = 1; j <= m.n; j++)
        {
            scanf("%d", &x);
            setrow(&m, i, j, x);
        }
    }
    
    printf("\n\n");
    displayrow(m);

    // column
    printf("\nEnter dimension of column matrix: ");
    scanf("%d", &l.o);

    l.B = (int *)malloc(l.o * (l.o + 1) / 2 * sizeof(int));

    printf("Enter all the elements: \n");
    for (int i = 1; i <= l.o; i++)
    {
        for (int j = 1; j <= l.o; j++)
        {
            scanf("%d", &y);
            setcolumn(&l, i, j, y);
        }
    }
    
    printf("\n\n");
    displaycolumn(l);

    return 0;
}
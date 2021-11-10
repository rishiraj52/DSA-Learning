#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct matrix
{
    int A[10];
    int n;
};

void set(struct matrix *m, int i, int j, int x)
{
    if (i == j)
    {
        m->A[i - 1] = x;
    }
}

int get(struct matrix m, int i, int j)
{
    if (i == j)
    {
        return m.A[i - 1];
    }
    else
    {
        return 0;
    }
}

void display(struct matrix m)
{
    for (int i = 0; i < m.n; i++)
    {
        for (int j = 0; j < m.n; j++)
        {
            if (i == j)
            {
                printf("%d ", m.A[i]);
            }
            else
            {
                printf("0 ");
            }
        }
        cout << endl;
    }
}

int main()
{
    struct matrix m;
    m.n = 4;

    set(&m, 1, 1, 5);
    set(&m, 2, 2, 2);
    set(&m, 3, 3, 4);
    set(&m, 4, 4, 8);

    set(&m, 1, 4, 1);
    set(&m, 3, 4, 9);

    cout << get(m, 3, 3)<< endl;
    display(m);

    return 0;
}
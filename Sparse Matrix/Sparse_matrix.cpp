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
	cout << "Enter all non-ero elements" << endl;
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

int main()
{
	struct sparse s;
	create(&s);
	display(s);
}
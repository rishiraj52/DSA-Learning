#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
	int a = 52;
	int *ptr;
	ptr = &a;

	cout << a << endl;
	printf("%d\n", *ptr);
	cout << *ptr << endl;

	int arr[10] = {2, 4, 6, 8, 10, 12, 14};
	int *p;
	p = arr;

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}

	for (int j = 0; j < 10; j++)
	{
		printf("%d\t", p[j]);
	}

	printf("\n");

	int *pointer;
	// 	pointer=(int *)malloc(5*sizeof(int));       // in C
	pointer = new int[5]; // in C++
	pointer[0] = 10;
	pointer[1] = 15;
	pointer[2] = 20;
	pointer[3] = 25;
	pointer[4] = 30;

	for (int k = 0; k < 5; k++)
	{
		printf("%d\t", pointer[k]);
	}

	// free(pointer);               // in C
	delete[] pointer; // in C++
	return 0;
}
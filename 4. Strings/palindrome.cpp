#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

// To check whether the string is palindrome or not first reverse the string and then copy it.

int main()
{
    char A[] = "liril";
    char B[10];

    // 1st method by making another array
    int i, j;
    for (i = 0; A[i] != '\0'; i++)
    {
        // nothing goes here
    }
    i = i - 1;
    for (j = 0; i >= 0; i--, j++)
    {
        B[j] = A[i];
    }
    B[j] = '\0';

    int x, y;
    for (x = 0, y = 0; A[x] != '\0' && B[y] != '\0'; x++, y++)
    {
        if (A[x] != B[y])
        {
            cout << "String is not a palindrome" << endl;
            break;
        }
    }
    if (A[x] == B[y])
    {
        cout << "String is palindrome" << endl;
    }

    // 2nd method by reading the same string
    int u, v;
    char temp;
    for (v = 0; A[v] != '\0'; v++)
    {
        // nothing goes here
    }
    v = v - 1;
    for (u = 0; u < v; u++, v--)
    {
        if (A[u] != A[v])
        {
            cout << "String is not a palindrome" << endl;
            break;
        }
    }
    if (A[u] == A[v])
    {
        cout << "String is palindrome" << endl;
    }
}
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    char A[] = "Reader";
    char B[] = "Reading";
    int i, j;
    for (i = 0, j = 0; A[i] != '\0' && B[i] != '\0'; i++, j++)
    {
        if (A[i] != B[j])
        {
            break;
        }
    }
    if (A[i] == B[j])
    {
        cout << "String is same" << endl;
    }
    else if (A[i] < B[j])
    {
        cout << "String A is smaller" << endl;
    }
    else
    {
        cout << "String B is smaller" << endl;
    }
}
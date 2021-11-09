#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    char A[] = "illusion";
    long int H = 0, x = 0;
    int i;
    for (i = 0; A[i] != '\0'; i++)
    {
        x = 1;
        x = x << (A[i] - 97);
        if ((x & H) > 0)
        {
            cout << A[i] << " is duplicate." << endl;
        }
        else
        {
            H = H | x;
        }
    }
}

/*
Bitwise oprations

1. Left Shift <<
2. Bit ORing (Merging)
3. Bit ANDing (Masking)
*/
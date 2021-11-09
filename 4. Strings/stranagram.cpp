#include <iostream>
#include <stdio.h>
#include <stdlib.h>

/*
Anagrams are different words but using same alphabets.
1. Check whether the two strings are of same length or not, if they are of different length then they are cannot be anagram.
2. check whether the alphabets are present in another string or not.
*/

using namespace std;

int main()
{
    char A[] = "decimal";
    char B[] = "medicall";

    // char A[] = "verbose";
    // char B[] = "observe";

    long int H[26] = {0};
    int i;
    for (i = 0; A[i] != '\0'; i++)
    {
        H[A[i] - 97]++;
    }
    for (i = 0; B[i] != '\0'; i++)
    {
        H[B[i] - 97]--;
        if (H[B[i] - 97] < 0)
        {
            cout << "Strings are not anagram" << endl;
            break;
        }
    }
    if (B[i] == '\0')
    {
        cout << "Strings are anagram" << endl;
    }
}
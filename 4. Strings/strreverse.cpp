#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    char name[] = "rishiraj";
    char B[10];
    int i, j;
    for (i = 0; name[i] != '\0'; i++)
    {
        // nothing goes here
    }
    i = i - 1;
    for (j = 0; i >= 0; i--, j++)
    {
        B[j] = name[i];
    }
    B[j] == '\0';
    cout << "Reverse string is " << B << endl;
    cout << endl;

    char temp;
    for (j = 0; name[j] != '\0'; j++)
    {
        // nothing goes here
    }
    j = j - 1;
    for (i = 0; i < j; i++, j--)
    {
        temp=name[i];
        name[i]=name[j];
        name[j]=temp;
    }
    cout << "Reverse string is " << name << endl;
}
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    char str[] = {'r', 'i', 's', 'h', 'i', 'r', 'a', 'j', '\0'};
    int i;

    for (i = 0; str[i] != '\0'; i++)
    {
        // nothing goes here
    }
    cout<<"Length of the string is "<<i<<endl;
}
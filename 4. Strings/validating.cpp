#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int valid(char *name)
{
    for (int i = 0; name[i] != '\0'; i++)
    {
        if (!(name[i] >= 65 && name[i] <= 90) && !(name[i] >= 97 && name[i] <= 122) && !(name[i] >= 48 && name[i] <= 57))
        {
            return 0;
        }
    }
    return 1;
}

int main()
{

    char *name = "rishiraj+52";
    if (valid(name))
    {
        cout << "String is valid";
    }
    else
    {
        cout << "String is invalid";
    }
}
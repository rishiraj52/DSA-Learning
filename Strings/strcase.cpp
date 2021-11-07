#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

// changing upper case to lower case

int main()
{
    char str1[] = "STRINGS";
    char str2[] = "strings";
    int i;

    for (i = 0; str1[i] != '\0'; i++)
    {
        str1[i] = str1[i] + 32; // adding the difference between ASCII code of upper case letters and lower case letters.
    }
    cout << "Lower case string is '" << str1 << "'" << endl;
    cout << endl;
    for (i = 0; str2[i] != '\0'; i++)
    {
        str2[i] = str2[i] - 32; // subtracting the difference between ASCII code of upper case letters and lower case letters.
    }
    cout << "Upper case string is '" << str2 << "'" << endl;
    cout << endl;



    // toggle case- means upper to lower and lower to upper.

    char str3[] = "WelCome";
    for (i = 0; str3[i] != '\0'; i++)
    {
        if (str3[i] >= 65 && str3[i] <= 90)
        {
            str3[i] = str3[i] + 32;
        }
        else if (str3[i] >= 97 && str3[i] <= 122)
        {
            str3[i] = str3[i] - 32;
        }
    }
    cout << "Toggle case string is '" << str3 << "'" << endl;
}
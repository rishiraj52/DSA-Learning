#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    char str[] = "Hello      Friends";
    int i, vcount = 0, ccount = 0, word = 1;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            vcount++;
        }
        else if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
        {
            ccount++;
        }

        if (str[i] == ' ' && str[i - 1] != ' ')
        {
            word++;
        }
    }
    cout << "No. of vowels are '" << vcount << "'" << endl;
    cout << "No. of consonants are '" << ccount << "'" << endl;
    cout << "No. of words are '" << word << "'" << endl;
}
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int arr[12] = {3, 5, 7, 4, 8, 9, 16, 2, 1, 0, 10, 11};
    int MIN = arr[0], MAX = arr[0];

    for (int i = 0; i < 12; i++)
    {
        if (arr[i] < MIN)
        {
            MIN = arr[i];
        }
        else if (arr[i] > MAX)
        {
            MAX = arr[i];
        }
    }
    cout << "Minimum is " << MIN << endl
         << "Maxinmum is " << MAX << endl;
}

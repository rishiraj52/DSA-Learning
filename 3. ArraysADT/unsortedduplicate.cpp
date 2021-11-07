#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int arr[12] = {3, 5, 8, 3, 6, 5, 8, 3, 9, 3, 12, 8};

    for (int i = 0; i < 11; i++)
    {
        int count = 1;
        if (arr[i] != -1)
        {
            for (int j = i + 1; j < 12; j++)
            {
                if (arr[i] == arr[j])
                {
                    count++;
                    arr[j] = -1;
                }
            }
        }
        if (count > 1)
        {
            cout << arr[i] << " repeating " << count << " times." << endl;
        }
    }
}
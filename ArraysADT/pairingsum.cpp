#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int arr[12] = {3, 5, 7, 4, 8, 9, 6, 2, 1, 0, 10, 11};
    int k;
    cout << "Sum= ";
    cin >> k;
    cout << endl;

    for (int i = 0; i < 11; i++)
    {
        for (int j = i + 1; j < 12; j++)
        {
            if (arr[i] + arr[j] == k)
            {
                cout << arr[i] << " and " << arr[j] << " = " << k << endl;
            }
        }
    }
}

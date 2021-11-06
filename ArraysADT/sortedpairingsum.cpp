#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int arr[12] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    int k;
    cout << "Sum= ";
    cin >> k;
    cout << endl;

    // using while loop
    int i = 0, j=11
    while (i < j)
    {
        if (arr[i] + arr[j] == k)
        {
            cout << arr[i] << " and " << arr[j] << " = " << k << endl;
            i++;
            j--;
        }
        else if (arr[i] + arr[j] < k)
        {
            i++;
        }
        else
        {
            j--;
        }
    }

    // using for loop
    cout<<endl;cout<<endl;cout<<endl;
    for (i = 0, j=11; i < j; )
    {
        if (arr[i] + arr[j] == k)
        {
            cout << arr[i] << " and " << arr[j] << " = " << k << endl;
            i++;
            j--;
        }
        else if (arr[i] + arr[j] < k)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
}

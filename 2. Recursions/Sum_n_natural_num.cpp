#include <iostream>
#include <stdio.h>

using namespace std;

// using recursion--- O(n)
int sum1(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return sum1(n - 1) + n;
    }
}

// using n g.p.--- O(1)
int sum2(int n)
{
    return n * (n + 1) / 2;
}

// using loop--- O(n)
int sum3(int n)
{
    int s = 0;
    for (int i = 0; i <= n; i++)
    {
        s = s + i;
    }
    return s;
}

int main()
{
    int n = 0;
    cout << "Enter the number" << endl;
    cin >> n;

    cout << "Sum of n natural numbers is: " << sum1(n) << endl;
    cout << "Sum of n natural numbers is: " << sum2(n) << endl;
    cout << "Sum of n natural numbers is: " << sum3(n) << endl;

    return 0;
}
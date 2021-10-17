#include <iostream>
#include <stdio.h>

using namespace std;

//  using recursion
int pow1(int m, int n)
{
    if (n == 0)
    {
        return 1;
    }
    else if (m == 0)
    {
        return 0;
    }
    else
    {
        return pow1(m, n - 1) * m;
    }
}

//  using loop call
int pow2(int m, int n)
{
    int power = 1;
    for (int i = 1; i <= n; i++)
    {
        power = power * m;
    }
    return power;
}

//  faster method by recursion
int pow3(int m, int n)
{
    if (n == 0)
    {
        return 1;
    }
    else if (n % 2 == 0)
    {
        return pow3(m * m, n / 2);
    }
    else
    {
        return m * pow3(m * m, (n - 1) / 2);
    }
}

int main()
{
    int m = 0, n = 0;

    cout << "Enter the number" << endl;
    cin >> m;

    cout << "Enter the power" << endl;
    cin >> n;

    cout << "Answer is: " << pow1(m, n) << endl;
    cout << "Answer is: " << pow2(m, n) << endl;
    cout << "Answer is: " << pow3(m, n) << endl;

    return 0;
}
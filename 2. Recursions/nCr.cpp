#include <iostream>
#include <stdio.h>

using namespace std;

// using recursion
int fact(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return fact(n - 1) * n;
    }
}

int nCr1(int n, int r)
{
    int t1, t2, t3;
    t1 = fact(n);
    t2 = fact(r);
    t3 = fact(n - r);

    return t1 / (t2 * t3);
}

// using loop call
int nCr2(int n, int r)
{
    if (r == 0 || r == n)
    {
        return 1;
    }

    else
    {
        return nCr2(n - 1, r - 1) + nCr2(n - 1, r);
    }
}

int main()
{
    int n = 0, r = 0;
    cout << "Enter the value of n" << endl;
    cin >> n;

    cout << "Enter the value of r" << endl;
    cin >> r;

    if (n < 0 || r < 0)
    {
        cout << "Enter valid number";
    }

    else
    {
        cout << n << "C" << r << ": " << nCr1(n, r) << endl;
        cout << n << "C" << r << ": " << nCr2(n, r) << endl;
    }

    return 0;
}

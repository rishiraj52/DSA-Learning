#include <iostream>
#include <stdio.h>

using namespace std;

//  using recursion - O(n^2)
double e1(int x, int n)
{
    static double p=1, f=1;
    if(n==0){
        return 1;
    }
    else{
        double r;
        r = e1(x, n-1);
        p=p*x;
        f=f*n;
        return r+p/f;
    }
}

// using iterative Horner's rule - O(n)
double e2(int x, int n)
{
    double s = 1;
    for (; n > 0; n--)
    {
        s = 1 + x * s / n;
    }
    return s;
}

// using recursion Horner's rule - O(n)
double e3(int x, int n)
{
    static double s=1;
    if(n==0){
        return s;
    }
    else{
        s=1+x*s/n;
        return e3(x,n-1);
    }
}

int main()
{
    int x = 0, n = 0;

    cout << "Enter the value of x" << endl;
    cin >> x;
    cout << "Enter the value of n" << endl;
    cin >> n;

    cout << "Answer is: " << e1(x, n) << endl;
    cout << "Answer is: " << e2(x, n) << endl;
    cout << "Answer is: " << e3(x, n) << endl;

    return 0;
}
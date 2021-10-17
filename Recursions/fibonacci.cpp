#include <iostream>
#include <stdio.h>

using namespace std;

// using recursive - O(2^n)

int fibonacci1(int n){
    if(n<=1){
        return n;
    }
    else{
        return fibonacci1(n-2)+fibonacci1(n-1);
    }
}

// using iterative - O(n)

int fibonacci2(int n){
    int t0=0, t1=1, sum;
    if(n<=1){
        return n;
    }
    for (int i=2; i<=n; i++){
        sum=t0+t1;
        t0=t1;
        t1=sum;
    }
    return sum;
}

// A recursive function calling itself multiple times for the same value, such a recursive function is called as excessive recursion.
// using memoization - storing the results of the function call so that they can be utilized again when we need the same call or avoiding excessive calls.

int F[100];

int fibonacci3(int n){
    if(n<=1){
        F[n]=n;
        return n;
    }
    else{
        if(F[n-2]==-1){
            F[n-2]=fibonacci3(n-2);
        }
        if(F[n-1]==-1){
            F[n-1]=fibonacci3(n-1);
        }
        return F[n-2]+F[n-1];
    }
}

int main()
{
    int  n;

    cout << "Enter the value of n" << endl;
    cin >> n;

    cout << "Answer is: " << fibonacci1(n) << endl;
    cout << "Answer is: " << fibonacci2(n) << endl;
    
    for(int i=0; i<n; i++){
        F[i]=-1;
    }
    cout << "Answer is: " << fibonacci3(n) << endl;
    

    return 0;
}
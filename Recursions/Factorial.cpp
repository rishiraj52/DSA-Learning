#include <iostream>
#include <stdio.h>

using namespace std;

// using recursion
int fact1(int n){
    if(n==0 || n==1){
        return 1;
    }
    
    else{
        return fact1(n-1)*n;
    }
}

// using loop call
int fact2(int n){
    int f=1;
    for(int i=1; i<=n; i++){
        f=f*i;
    }
    return f;
}

int main() {
    int n=0;
    cout<<"Enter the number"<<endl;
    cin>>n;
    
    cout<<"Factorial of n numbers: "<<fact1(n)<<endl;
    cout<<"Factorial of n numbers: "<<fact2(n)<<endl;
    
    return 0;
}
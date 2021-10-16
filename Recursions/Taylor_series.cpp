#include <iostream>
#include <stdio.h>

using namespace std;

//  using recursion
double e(int m, int n){
    static double p=1, f=1;
    if(n==0){
        return 1;
    }
    else{
        double r;
        r = e(m, n-1);
        p=p*m;
        f=f*n;
        return r+p/f;
    }
}

int main() {
    int m=0, n=0;

    cout<<"Enter the value of m"<<endl;
    cin>>m;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    
    cout<<"Answer is: "<<e(m , n)<<endl;
    
    return 0;
}
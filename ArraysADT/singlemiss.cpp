#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n-1; i++){
        cin>>arr[i];
    }
    
    if(arr[0]==1){
        int sum=0;
        for(int i=0; i<n-1; i++){
            sum=sum+arr[i];
        }
        int s=n*(n+1)/2;
        cout<<"Missing number = "<<s-sum<<endl;
    }
    // else{
    //     int diff=0-arr[0];
    //     for(int i=0; i<n-1; i++){
    //         if((i-arr[i])!=diff){
    //             cout<<i+diff;
    //         }
    //     }
    // }
      
}
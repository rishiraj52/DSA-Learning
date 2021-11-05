#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n-3; i++){
        cin>>arr[i];
    }
    
    if(arr[0]==1){
        int diff=arr[0]-0;
        for(int i=0; i<n-3; i++){
            if((arr[i]-i)!=diff){
                while(diff<(arr[i]-i)){
                    cout<<"Missing element= "<< i+diff<<endl;
                    diff++;
                }
            }
        }
    }     
}
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

// hashing is not implemented properly just a structural code.
int main() {
    int n,l,h;
    cin>>n;
    cin>>l;
    cin>>h;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    for(int i=0; i<n; i++){
        H[arr[i]]++;
    }
    
    for(int i=l; i<=h; i++){
        if(H[i]==0){
            cout<<"Missing element= "<<i<<endl;
        }
    }
}
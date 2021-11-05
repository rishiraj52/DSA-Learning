#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

// hashing is not implemented properly just a structural code.
int main() {
    int arr[10]={2,5,5,7,8,12,12,12,15,17};
    
    int lastduplicate=0;

    for(int i=0; i<10; i++){
        if(arr[i]==arr[i+1]){
            int j=i+1;
            while (arr[j]==arr[i])j++;
            cout<<arr[i]<<" is appearing "<<j-i<<" times."<<endl;
            i=j-1;
        }
    }
}
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main() {
    int arr[10]={2,5,5,7,8,12,12,12,15,17};
    
    int lastduplicate=0;

    for(int i=0; i<10; i++){
        if(arr[i]==arr[i+1] && arr[i]!=lastduplicate){
            cout<<"Duplicate is "<<arr[i]<<endl;
            lastduplicate=arr[i];
        }
    }
}

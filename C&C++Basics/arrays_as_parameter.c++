#include <iostream>
#include <stdio.h>
using namespace std;


// this array doesn't actually know the size of an array to be passed so we mention it by 'int n'.
// here, array is passed by address array cannot be passed by value at all.
// giving the '[]' meeans means it's just pointer to an array.
void func1(int A[], int n){       
    
    A[2]= 52;
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", A[i]);
    }
}

int [] func2(int m){     // here, int [] tells the retrn type would be an array or [] bracket resembles an array.
    int *p;
    p=(int *)malloc(m*sizeof(int));
    return p;
}

int main() {
    int A[7]={2,4,6,8,10,12,14};
    func1(A,5);
    cout<<A[2]<<endl;             // any changes made in function will reflect in main function.
    
    // how function can return an array.
    int *x;
    x=func2(5);
    
	return 0;
}
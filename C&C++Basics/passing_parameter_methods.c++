#include <iostream>
#include <stdio.h>
using namespace std;

void swap(int x, int y){
    int temp;
    temp=x;
    x=y;
    y=temp;
}

void swap2(int *p, int *q){            // in call by address formal parameter must be pointer.
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
}

void swap3(int &m, int &n){           // in call by address formal parameter must have ampersand(&).
    int temp;
    temp=m;
    m=n;
    n=temp;
}

int main() {
    
    // parameter passing methods
    // call by value- any changes done in formal parameter are not reflected in actual parameter
	
	int a=10, b=5;
    swap(a,b);
	printf("%d\t%d\n", a,b);
	
	// call by address- addresses of actual parameter are passed to formal parameter and formal parameters must be pointer.any changes done in formal parameters will affect actual parameters.

	int r=25, s=52;
    swap2(&r,&s);
	printf("%d\t%d\n", r,s);
	
    // call by refrence- actual parameters = formal parameters, just the change of name takes place and it don't take any extra memory..

	int e=12, f=21;
    swap3(e,f);
	printf("%d\t%d\n", e,f);

	return 0;
}
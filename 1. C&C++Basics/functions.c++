#include <iostream>
#include <stdio.h>
using namespace std;

int add(int a, int b){      // a and b are called as formal parameter
    int c;
    c=a+b;
    return c;
}

int main() {
    
    // functions- piece of code which performs a specific task. group of related instructions which perform specific task
    /*
    
    keeping/writing everything inside a single main function is called as monolithic programming.
    breaking into different functions and writing is known as modular or procedural programming.
    paramater passing-
    pass by value      (both in C & C++)
    pass by address    (both in C & C++)
    pass by refrence   (only in C++)
    */
    
	cout<<"GfG!\n";

    int x,y,z;
    x=52;
    y=25;
    z=add(x,y);     // here x & y are called as actual parameter.
    cout<<z<<endl;
    
    // the values of actual parameter are copied in formal parameter and value is returned.
	
	
	return 0;
}
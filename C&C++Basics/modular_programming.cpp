#include <iostream>
#include <stdio.h>
using namespace std;


// modular_programming

int area(int length, int breadth){
    return length*breadth;
}

int perimeter(int length, int breadth){
    int p;
    p=2*(length+breadth);
    return p;
}


int main() {
	cout<<"GfG!\n";
	
	int length=0, breadth=0;
	printf("Enter Length and Breadth\n");
	cin>>length>>breadth;
	
	int a=area(length,breadth);
	int peri=perimeter(length,breadth);
	cout<<a<<endl<<peri<<endl;
	return 0;
}
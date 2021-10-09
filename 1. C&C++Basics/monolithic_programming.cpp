#include <iostream>
#include <stdio.h>
using namespace std;


// monolithic_programming
int main() {
	cout<<"GfG!\n";
	
	int length=0, breadth=0;
	printf("Enter Length and Breadth\n");
	cin>>length>>breadth;
	
	int area=length*breadth;
	int perimeter=2*(length+breadth);
	cout<<area<<endl<<perimeter<<endl;
	return 0;
}
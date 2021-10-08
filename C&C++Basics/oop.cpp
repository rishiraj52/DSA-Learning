#include <iostream>
#include <stdio.h>
using namespace std;


// oop

class rectangle{
public:
    int length;
    int breadth;

int area(){
    return length*breadth;
}

int perimeter(){
    int p;
    p=2*(length+breadth);
    return p;
}

void initialise(int l, int b){
    length=l;
    breadth=b;
}
};


int main() {
	cout<<"GfG!\n";
	
	rectangle r;
	printf("Enter Length and Breadth\n");
	int l=0,b=0;
	
	cin>>l>>b;
	
	r.initialise(l, b);
	int a=r.area();
	int peri=r.perimeter();
	cout<<a<<endl<<peri<<endl;
	
	
	return 0;
}
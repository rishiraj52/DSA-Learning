#include <iostream>
#include <stdio.h>
using namespace std;


// struct_and_func

struct rectangle{
    int length;
    int breadth;
};

int area(struct rectangle r){
    return r.length*r.breadth;
}

int perimeter(rectangle r){
    int p;
    p=2*(r.length+r.breadth);
    return p;
}

void initialise(struct rectangle *r, int l, int b){
    r->length=l;
    r->breadth=b;
}

int main() {
	cout<<"GfG!\n";
	
	struct rectangle r={0,0};
	printf("Enter Length and Breadth\n");
	cin>>r.length>>r.breadth;
	
	int a=area(r);
	int peri=perimeter(r);
	cout<<a<<endl<<peri<<endl;
	
	//call by address
	
	int l=0,b=0;
	
	cin>>l>>b;
	
	initialise(&r, l, b);
	a=area(r);
	peri=perimeter(r);
	cout<<a<<endl<<peri<<endl;
	
	
	return 0;
}
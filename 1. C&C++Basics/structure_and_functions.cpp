#include <iostream>
#include <stdio.h>
using namespace std;

// structure and functions
struct rectangle{
    int length;
    int breadth;
};

void intialize(struct rectangle *ptr, int l, int b){
    ptr->length=l;
    ptr->breadth=b;
}

int area(struct rectangle r){
    printf("%d", r.length*r.breadth);
    return 0;
}

void changelength(struct rectangle *p, int l){
    p->length=l;
}


int main() {
	cout<<"GfG!";
	
	struct rectangle r;
	
	intialize(&r, 10, 5);
	area(r);
	cout<<endl;
	changelength(&r, 15);
	cout<<r.length<<endl;
	return 0;
}
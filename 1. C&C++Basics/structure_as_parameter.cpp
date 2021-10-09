#include <iostream>
#include <stdio.h>
using namespace std;

// structur_as_a_parameter

struct rectangle{
    int length;
    int breadth;
};

// using call by value
int area1(struct rectangle r1){
    r1.length++;      // this will not impact in actual parameter  
    return(r1.length*r1.breadth);
}

// using call by refrences
int area2(struct rectangle &r2){
    r2.length++;     // this will impact in actual parameter
    return(r2.length*r2.breadth);
}

// call by address
void changelength(struct rectangle *p, int l){
    p->length=l;
    
}

// call by value to arrays using structure
struct test{
    int A[5];
    int n;
};

void fun(struct test t1){
    t1.A[0]=4;
    t1.A[1]=5;
    t1.A[2]=6;
    t1.A[3]=7;
    t1.A[4]=8;
    t1.A[5]=9;
    for(int i=0; i<6; i++){
        cout<<t1.A[i]<<" ";
    }
    cout<<endl;
}

// pointer to a structure
struct rectangle *fun1(){
    struct rectangle *p;
    p=new rectangle;
    // p=(struct rectangle *)malloc(n*sizeof(struct rectangle));   
    p->length=15;
    p->breadth=7;
    
    return p;
}


int main() {
	cout<<"GfG!\n";
	struct rectangle r = {10, 4};
	printf("%d\n", area1(r));
	cout<<r.length<<endl;       // length of formal parameter was changed above but didn't impacted in actual parameter's value.
	printf("%d\n", area2(r));
	cout<<r.length<<endl;       // length of formal parameter was changed above but impacted in actual parameter's value.
	changelength(&r,15);
	cout<<r.length<<endl;
	
	// we cannot use call by value on arrray but in structures we can use call by value
	struct test t={{2,3,4,5,6},7};
	fun(t);
	for(int j=0; j<5; j++){
        cout<<t.A[j]<<" ";
    }
	
	/*  -----------------------------------------------------------  */
	struct rectangle *ptr=fun1();
	cout<<ptr->length<<" "<<ptr->breadth<<endl;
	
	return 0;
}
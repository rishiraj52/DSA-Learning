#include <iostream>
#include <stdio.h>
using namespace std;

// C_to_Cpp
class rectangle{
private:
    int length;
    int breadth;
    
public:
rectangle(int l, int b){    // rectangle became the constructor which will be automatically called whenever we are creating any object, it does the job of initialization.
    length=l;               // constructor is a function which creates an object as well as initialize an object. 
    breadth=b;              // constructor have same name as class name
}

int area(){
    printf("%d", length*breadth);
    return 0;
}

void changelength(int l){
    length=l;
}
};


int main() {
	cout<<"GfG!\n";
	
	rectangle r(10, 5);       // initialized here only
	
	r.area();
	cout<<endl;
	r.changelength(15);
	
	return 0;
}
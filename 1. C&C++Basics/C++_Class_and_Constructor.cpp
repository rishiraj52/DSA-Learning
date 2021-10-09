#include <iostream>
#include <stdio.h>
using namespace std;

class rectangle
{
private:                               // it  means only available for the specific class.
    int length;
    int breadth;
public:
    
    rectangle()                        // default constructor- which means if the values aren't given to length and breadth the default value of 0 will be implemented.
    {
        length=0;
        breadth=0;
    }
    rectangle(int l, int b)           // parametrized constructor- which means the value given by the user will be implemented.
    {
        length=l;
        breadth=b;
    }
    int area()                        // in C language you can say it is a funtions for doing specific job.
    {
        return length*breadth;
    }
    int perimeter()                  // in C language you can say it is a funtions for doing specific job.
    {
        return 2*(length+breadth);
    }
    
    // setlength and setbreadth are called mutator functions which are used to mutate or change the values. 
    void setlength(int l)
    {
        length=l;
    }
    void setbreadth(int b)
    {
        breadth=b;
    }
    // getlength and getbreadth are called accessor functions which are used to access or read the values.
    int getlength(int l)
    {
        return length;
    }
    int getbreadth(int b)
    {
        return breadth;
    }
    ~rectangle()
    {
        cout<<"Destructor";   // since we have done no memory allocation in this class so we don't need it.
    }
    
};


int main() {
	cout<<"GfG!\n";
	
	rectangle r(15,7);

	cout<<"Area = "<<r.area()<<endl;
	cout<<"Perimeter = "<<r.perimeter()<<endl;
	
	return 0;
}
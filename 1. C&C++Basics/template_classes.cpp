#include <iostream>
#include <stdio.h>
using namespace std;

// template classes

/* ------------------------------------------------------------------------------------------------------------------------------
C++ uses generic funtions and generic classes.
Generic functions are template functions, and classes are template classes.
Generic feature is used when you want to enter the values for different data types also rather than using only int data type.
------------------------------------------------------------------------------------------------------------------------------ */

template <class T>                     // all those values who's value can be of ny data type put the template class name in front replacing the int data type.
class arithmetic
{
private:                               // it  means only available for the specific class.
    T a;  // int a;
    T b;  // int b;
public:
    arithmetic(T a, T b);  //arithmetic(int a, int b)    // parametrized constructor- which means the value given by the user will be implemented.
    
        T add();    // int add();
        T sub();    // int sub();
    
};
// :: is used for scope resolution
// to know more about scope resolution you can go to: https://www.geeksforgeeks.org/scope-resolution-operator-in-c/
template <class T> 
arithmetic<T>::arithmetic(T a, T b)
{
    this->a=a;
    this->b=b;
}

template <class T> 
T arithmetic<T>::add()
{
    T c;
    c=a+b;
    return c;
}

template <class T> 
T arithmetic<T>::sub()
{
    T c;
    c=a-b;
    return c;
}

/* -------------------------------------------------------------------------------------------------
In this code almost wherever I have declared data type, variable name,
everything is changing to T, but it may not be true always, remember this one.
So you have to observe and change it, whichever should be changed, only that you should change. 
--------------------------------------------------------------------------------------------------*/

int main() {
	cout<<"GfG!\n";
	
	arithmetic<int> ar1(52,25);                  // here adding <int> means all the T will be replaced by int data type and this class will become pure integer type
    cout<<"Add ar1= "<<ar1.add()<<endl;
    arithmetic<float> ar2(52.25,25.52);
	cout<<"Add ar2= "<<ar2.add()<<endl;
	
	return 0;
}
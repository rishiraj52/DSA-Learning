#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{

	// refrence is only part of C++ and not of C.
	// it is a nickname or alias given to a variable.
	// & before a variabled refrence. * before variable is pointer. nothing beforea a variable is data variable.
	cout << "GfG!" << endl;

	int a = 10;
	int &r = a;

	// a=r=10;  refrence is just another name given to a variable.
	// refrence doesn't consume memory.

	printf("%d\n%d\n", a, r);
	r++;
	printf("%d\n%d\n", a, r);
	return 0;
}

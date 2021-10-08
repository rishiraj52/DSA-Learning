#include <stdio.h>
#include <iostream>

using namespace std;

struct rectangle
{
    int length;
    int breadth;
    char x;
} r2; // declaration of variable
int main()
{
    struct rectangle r1 = {15, 7}; // simple  declaration

    printf("%lu\n", sizeof(r2));
    cout << r1.length << endl;
    cout << r1.breadth << endl;

    r1.length = 20;
    r1.breadth = 12;

    cout << r1.length << endl;
    cout << r1.breadth << endl;

    return 0;
}
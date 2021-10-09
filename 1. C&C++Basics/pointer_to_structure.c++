#include <iostream>
#include <stdio.h>
using namespace std;

struct rectangle
{
    int length;
    int breadth;
} r;

int main()
{
    // pointer to a structure
/*
    cout << "GfG!\n";

    struct rectangle r = {10, 4};
    struct rectangle *p = &r;

    r.length = 15;
    (*p).length = 20; // for accessing pointer to a variable. we put pointer in brackets.
    p->breadth = 9;   // for accessing pointer to a variable. we can also use arrow.

    printf("%d\n%d\n", (*p).length, p->breadth);

    // now dynammicaly
    struct rectangle *ptr;
    ptr = (struct rectangle *)malloc(sizeof(struct rectangle));
    ptr->length = 12;
    ptr->breadth = 7;

    printf("%d\n%d\n", ptr->length, (*ptr).breadth);
*/

    // pointer to a structure practice

    rectangle r = {10, 5}; //  inside C++ we can skip struct but in C compiler we have to mention struct at the beginenning, i.e. struct rectangle r={10,5}

    return 0;
}
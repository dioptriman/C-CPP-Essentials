#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using std::cout;
using std::endl;

struct Rectangle
{
    int length;
    int breadth;
};

void fun(struct Rectangle *p)
{
    p -> length =20;
    cout << "Length : " << p->length << endl;
    cout << "Breadth : " << p->breadth << endl;
}


int main()
{
    struct Rectangle r ={10, 5};
    fun(&r);
    printf("Length %d \nBreadth %d \n", r.length, r.breadth);
    return 0;
}
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

struct Rectangle *fun()
{
    struct Rectangle *p;
    p = (struct Rectangle *)malloc(sizeof(struct Rectangle));
    p -> length = 15;
    p -> breadth = 7;
    return p;

}

int main()
{
    struct Rectangle *ptr = fun();
    cout << "Length : " << ptr ->length << endl;
    cout << "Breadth : " << ptr -> breadth << endl;
    return 0;
}
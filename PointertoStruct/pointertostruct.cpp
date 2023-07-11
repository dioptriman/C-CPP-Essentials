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

int main()
{
    struct Rectangle r = {10, 5};
    cout << r.length << endl;
    cout << r.breadth << endl;

    struct Rectangle *p = &r;
    cout << p->length << endl;
    cout << p->breadth << endl;
    return 0;
}
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
    struct Rectangle *p;
    p = (struct Rectangle *)malloc(sizeof(struct Rectangle));
    p->length = 15;
    p->breadth = 7;
    cout << p->length << endl;
    cout << p ->breadth << endl;
    free(p); 
    return 0;
}
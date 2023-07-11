#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using std::cout;
using std::endl;
using std::cin;

struct Rectangle
{
    int length;
    int breadth;
};


int area(struct Rectangle r)
{
    return r.length * r.breadth;
}

int perimeter(struct Rectangle r)
{
    return 2*(r.length + r.breadth);
}

int main()
{
    struct Rectangle r = {0, 0};
    printf("Enter length and breadth : \n");
    cin >> r.length >> r.breadth;

    int Area = area(r);
    int Perimeter = perimeter(r);

    printf("Area : %d\nPerimeter : %d\n", Area, Perimeter);
    return 0;
}
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


    void init(int l, int b)
    {
        breadth = b;
        length = l;
    }


    int area()
    {
        return length * breadth;
    }

    int perimeter()
    {
        return 2*(length + breadth);
    }
};

int main()
{
    struct Rectangle r = {0, 0};
    int l, b;
    printf("Enter length and breadth : \n");
    cin >>l >> b;

    r.init(l, b);

    int Area = r.area();
    int Perimeter = r.perimeter();

    printf("Area : %d\nPerimeter : %d\n", Area, Perimeter);
    return 0;
}
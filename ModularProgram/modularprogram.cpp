#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using std::cout;
using std::endl;
using std::cin;

int area(int length, int breadth)
{
    return length * breadth;
}

int perimeter(int length, int breadth)
{
    return 2*(length + breadth);
}

int main()
{
    int length = 0, breadth = 0;
    printf("Enter length and breadth : \n");
    cin >> length >> breadth;

    int Area = area(length, breadth);
    int Perimeter = perimeter(length, breadth);

    printf("Area : %d\nPerimeter : %d\n", Area, Perimeter);
    return 0;
}
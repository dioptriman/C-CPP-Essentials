#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using std::cout;
using std::endl;
using std::cin;

int main()
{
    int length = 0, breadth = 0;
    printf("Enter length and breadth : \n");
    cin >> length >> breadth;

    int area = length * breadth;
    int perimeter = 2 * (length + breadth);

    printf("Area : %d\nPerimeter : %d\n", area, perimeter);
    return 0;
}
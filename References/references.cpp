#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int a = 10;
    int &r = a;

    cout << "This is value of a : " << a << endl;
    r++;
    cout << "This is value of r : " << r << endl;
    cout << "This is value of a after an increment : " << a << endl;


    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    /* The const keyword specifies that a variable's value is constant
    & tells the compiler to prevent anything from modifying it 
    read only mode mei rhta hai so that it remains unchanged */

    const double PI = 3.14159;
    double radius = 10;
    double circumference = 2 * PI * radius ;

    cout << circumference << "cms" << endl;
}

// more examples of const 
// const int light_speed = 299792458





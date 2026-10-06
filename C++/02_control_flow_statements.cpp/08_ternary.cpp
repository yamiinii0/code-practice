// syntax -->

// condition ? expression1 : expression2 (short form of if-else)

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    // using ternary operator to find the maximum of two numbers
    int max = (a > b) ? a : b;

    cout << "The maximum of " << a << " and " << b << " is: " << max << endl;

    return 0;
}
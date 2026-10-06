// #include <iostream>
// using namespace std;

// int main() {
//     int a = 10;
//     float b = 3.6;

//     float sum = a + b; // Implicit typecasting: int to float
//     cout << "Sum (implicit typecasting): " << sum << endl;

//     return 0;
// }



// Typecasting means converting a value from one data type to another.
// C++ provides two types of typecasting: implicit and explicit.
// implicit woh hota hai jab compiler automatically ek data type ko dusre data type me convert kar deta hai
// jabki explicit typecasting me programmer khud specify karta hai ki kis tarah se conversion hona chahiye.


#include <iostream>
using namespace std;

int main() {
    int a = 3;
    double b = 44.44;

    double result = (double)a+b;  // Explicit typecasting: int to double
    cout << "result = "<< result << endl;

    return 0;
}
// syntax  -->

/*
      if (condition){
    // code to execute if condition is true
}
    */

#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (number > 0) {
        cout << "The number is positive." << endl;
    } else if (number < 0) {
        cout << "The number is negative." << endl;
    } else {
        cout << "The number is zero." << endl;
    }

    return 0;
}


// if-else syantax -->

// if (condition)
// {
//     // code if condition is true
// }
// else
// {
//     // code if condition is false
// }


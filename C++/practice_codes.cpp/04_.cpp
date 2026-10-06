// factorial of 11

#include <iostream>
using namespace std;

int main(){
    int n = 11, factorial = 1;
    for (int i = 1; i <= n; ++i) {
        factorial *= i; // factorial = factorial * i
    }
    cout << "Factorial of " << n << " is " << factorial << endl;
    return 0;
}
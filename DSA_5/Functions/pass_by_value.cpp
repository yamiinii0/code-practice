// [Pass by Value]--> copy of argument is passed to the function and changes made to the parameter inside the function do not affect the original argument.


#include <iostream>
using namespace std;

int sum(int a, int b) {
    a = a + 10; // This change will not affect the original argument
    return a + b;
}

int main(){
    int x = 6 , y = 4;
    cout << sum(x, y) << endl; // Output will be 20 (16 + 4)
    cout << "x: " << x << ", y: " << y << endl; // Output will be x: 6, y: 4

}
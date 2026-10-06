// call by value --> it copies the value from actual parameters to the formal parameters.

#include <iostream>
using namespace std;

void test(int &x, int y){
    x += 5;  // this will change the value of a in main, because x is passed by reference
    y *=2;   // changes made to x will reflect in main, but changes made to y will not reflect in main
    cout << x << ", " << y << endl;
}

int main(){
    int a = 3, b = 4;  // a is passed by reference, b is passed by value
    test(a,b);
    cout << a<< ", " << b << endl;
}



#include <iostream>
using namespace std;

void test(int *x, int y){
    *x += 5;   // change value at address x, this will change the value of a in main, because x is passed by reference
    y *=2;     // change local copy of y, changes made to x will reflect in main, but changes made to y will not reflect in main
    cout << *x << ", " << y << endl;
}

int main(){
    int a = 3, b = 4;  
    test(&a,b);
    cout << a<< ", " << b << endl;
    return 0;
}
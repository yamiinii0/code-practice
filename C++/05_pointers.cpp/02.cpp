#include<iostream>
using namespace std;

int main(){
    int x = 15;
    int *p = &x;  // p is a pointer to an integer, storing the address of x
    *p = *p+1;
    cout << x << endl;
}
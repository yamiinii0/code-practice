// fibonacci series

#include <iostream>
using namespace std;

int main(){
    int n = 10, t1 = 0, t2 = 1, nextTerm;
    cout << "Fibonacci Series: ";
    for (int i = 1; i <= n; ++i) {
        cout << t1 << " "; // print the current term  t1 = 0, t2 = 1
        nextTerm = t1 + t2; // calculate the next term  nextTerm = 0 + 1 = 1
        t1 = t2; // update t1 to the next term  t1 = 1
        t2 = nextTerm; // update t2 to the next term  t2 = 1
    }
    cout << endl;
    return 0;
}
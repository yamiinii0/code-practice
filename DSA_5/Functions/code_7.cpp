// print nth term of fibonacci


#include <iostream>
using namespace std;

int fibonacci(int n)
{
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n = 4;
    cout << "The " << n << "th term of the Fibonacci sequence is: " << fibonacci(n) << endl;
    return 0;
}
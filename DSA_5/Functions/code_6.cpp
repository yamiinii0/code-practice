// print all prime no.s from 2 to n


#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n = 100;
    for (int i = 2; i <= n; i++) //loop is written 2 times because we are checking for prime no.s from 2 to n, so we need to check for all no.s from 2 to n
    {
        if (isPrime(i))
            cout << i << " ";
    }
    cout << endl;
    return 0;
}
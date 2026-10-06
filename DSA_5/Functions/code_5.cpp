// check if a number is prime or not


#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++)  // i = 2 to sqrt(n) 
    {                                // like for n = 4 , i = 2, 2*2 <= 4, so it will check for 2 only
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n = 29;
    if (isPrime(n))
        cout << n << " is a prime number." << endl;
    else
        cout << n << " is not a prime number." << endl;
    return 0;
}
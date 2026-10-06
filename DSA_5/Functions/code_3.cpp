// Calculate sum of digits of a number

#include <iostream>
using namespace std;

int sumofdigits(int num)
{
    int digitsum = 0;

    while (num > 0)
    {
        int lastdigit = num % 10;
        num /= 10;

        digitsum += lastdigit;
    }
    return digitsum;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Sum of digits: " << sumofdigits(n) << endl;
    return 0;
}
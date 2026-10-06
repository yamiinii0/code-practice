// code to print sum of no.s 1 to n divisble by 3

#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cout << "Enter a number: ";
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        if(i % 3 == 0)
        {
            sum += i;
        }
    }

    cout << sum << endl;

    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int n = 10;
    for(int i=1; i<=n; i++) // no. of lines
    {
        for(int j=1; j<=i; j++)  // no. of stars in each line
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
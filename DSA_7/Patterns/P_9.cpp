// Hollow Diamond Pattern

#include <iostream>
using namespace std;

int main()
{
    int n = 4;

    // upper part of diamond

    for (int i = 0; i < n; i++)
    {
        // Print spaces = n-i
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }

        cout << "*";

        // Print stars = 2*i-1

        if (i != 0)
        {
            for (int j = 0; j < 2 * i - 1; j++)
            {
                cout << " ";
            }
            cout << "*";
        }

        cout << endl;
    }

    // lower part of diamond

    for (int i = 0; i < n - 1; i++)
    {

        // Print spaces = n-i
        for (int j = 0; j < i + 1; j++)
        {
            cout << " ";
        }

        cout << "*";

        // Print stars = 2*i-1

        if (i != n - 2)
        {
            // spaces
            for (int j = 0; j < 2 * (n - i) - 5; j++)
            {
                cout << " ";
            }
            cout << "*";
        }

        cout << endl;
    }
    return 0;
}

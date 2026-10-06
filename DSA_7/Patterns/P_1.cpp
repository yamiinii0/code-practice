// Square Pattern

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 4; // size of the square pattern

//     for (int i = 1; i <= n; i++) // outer loop for rows
//     {
//         for (int j = 1; j <= n; j++) // inner loop for columns
//         {
//             cout << j << " "; // print column number
//         }
//         cout << endl;
//     }
//     return 0;
// }



// Star Pattern

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 4; // size of the square pattern

//     for (int i = 1; i <= n; i++) // outer loop for rows
//     {
//         for (int j = 1; j <= n; j++) // inner loop for columns
//         {
//             cout << "*" << " "; // print column number
//         }
//         cout << endl;
//     }
//     return 0;
// }



// Character Pattern

#include <iostream>
using namespace std;

int main()
{
    int n = 4; // size of the square pattern

    for (int i = 0; i < n; i++) // outer loop for rows
    {
        char ch = 'A';
        for (int j = 0; j < n; j++) // inner loop for columns
        {
            cout << ch << " "; // print column number
            ch++; // increment the character
        }
        cout << endl;
    }
    return 0;
}
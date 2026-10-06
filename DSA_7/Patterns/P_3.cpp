// Triangle Pattern

// #include <iostream>
// using namespace std;

// int main(){
//     int n = 4; // size of the triangle pattern

//     for (int i = 0; i < n; i++) // outer loop for rows
//     {
//         for (int j = 0; j < i+1; j++) // inner loop for columns
//         {
//             cout << "* "; // print star
//         }
//         cout << endl;
//     }

//     return 0;
// }


// Number Pattern

// #include <iostream>
// using namespace std;

// int main(){
//     int n = 4; // size of the triangle pattern

//     for (int i = 0; i < n; i++) // outer loop for rows
//     {
//         for (int j = 0; j < i+1; j++) // inner loop for columns
//         {
//             cout << i+1 << " "; // print number
//         }
//         cout << endl;
//     }

//     return 0;
// }


// Character Pattern

#include <iostream>
using namespace std;

int main(){
    int n = 4; // size of the triangle pattern

    for (int i = 0; i < n; i++) // outer loop for rows
    {
        for (int j = 0; j < i+1; j++) // inner loop for columns
        {
            cout << char(i+65) << " "; // print character
        }
        cout << endl;
    }

    return 0;
}
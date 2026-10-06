// #include <iostream>
// using namespace std;

// int main(){
//     int n = 3; // size of the square pattern

//     int num = 1; // starting number

//     for (int i =0; i<n; i++) // outer loop for rows
//     {
//         for (int j = 0; j<n; j++) // inner loop for columns
//         {
//             cout << num << " "; // print the number
//             num++; // increment the number
//         }
//         cout << endl;
//     }

//     return 0;
// }


// Character Pattern

#include <iostream>
using namespace std;

int main(){
    int n = 3; // size of the square pattern
    
    char ch ='A'; // starting number

    for (int i =0; i<n; i++) // outer loop for rows
    {
        for (int j = 0; j<n; j++) // inner loop for columns
        {
            cout << ch << " "; // print the character
            ch++; // increment the character
        }
        cout << endl;
    }

    return 0;
}
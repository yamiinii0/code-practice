// Inverted Triangle Pattern

// #include <iostream>
// using namespace std;

// int main(){
//     int n=4;

//     for (int i=0; i<n; i++){
//         // Print spaces
//         for (int j=0; j<i; j++){
//             cout<< "  ";
//         }
//         // Print numbers
//         for (int j=0; j<n-i; j++){
//             cout<< (i+1) << " ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// Inverted Character Pattern

#include <iostream>
using namespace std;

int main(){
    int n=4;

    for (int i=0; i<n; i++){
        char ch = 'A' + i;
        // Print spaces
        for (int j=0; j<i; j++){
            cout<< "  ";
        }
        // Print characters
        for (int j=0; j<n-i; j++){
            cout<< ch  << " ";
        }
        cout<<endl;
    }
    return 0;
}
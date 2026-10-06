// Flyod's triangle Pattern

// #include<iostream>
// using namespace std;

// int main(){
//     int n=4;
//     int num = 1;

//     for(int i = 0; i<n; i++){
//         for(int j=0; j<i+1; j++){
//             cout << num << " ";
//             num++;
//         }
//         cout << endl;
//     }
//     return 0;
// }


// Character pattern

#include<iostream>
using namespace std;

int main(){
    int n=4;
    char num = 'A';

    for(int i = 0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
    return 0;
}
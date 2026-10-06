// array --> A fixed size collection of elements of the same data type stored in contiguous memory locations.

// Indexing starts from 0 in C++.

//Memory allocation for array is done at compile time (static memory allocation).

// eg - int marks[5] = {10, 20, 30, 40, 50}; // array of 5 integers , index = 0 to 4

#include <iostream>
using namespace std;

int main() {
    int std_id[5] = {1001,1002,1003,1004,1005};
    string std_nm[5] = {"yam","bhawesh","parth","jaini","raj"};

    cout << std_id[0] << " --> " << std_nm[0] << endl;
    cout << std_id[1] << " --> " << std_nm[1] << endl;
    cout << std_id[2] << " --> " << std_nm[2] << endl;
    cout << std_id[3] << " --> " << std_nm[3] << endl;
    cout << std_id[4] << " --> " << std_nm[4] << endl;

    return 0;
}
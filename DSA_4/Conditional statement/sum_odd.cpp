#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    int sum = 0;

    for(int i = 1; i <= n; i++){
        if(i % 2 != 0){
            sum += i;
        }
    }
    cout << "Sum = "<< sum << endl;
    return 0;
}


// logic behind this -->

// 1 --> odd to 1 print hoga
// then 2 is even toh nothing will happen 
// then 3 is odd toh 3 print hoga
// then 4 is even toh nothing will happen
// toh 1+3 = 4 print hoga
#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int *p = arr;

    cout << *(p + 1) << endl;
    cout << *p++ << endl;  //pehle value print hoga fir pointer next element pe chala jayega
    cout << *++p << endl;  //pehle pointer next element pe chala jayega fir value print hoga
    cout << *--p << endl;  //pehle pointer previous element pe chala jayega fir value print hoga


    int *start = &arr[1];
    int *end = &arr[4];
    int diff = end - start;
    return 0;
}
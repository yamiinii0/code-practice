#include <iostream>
using namespace std;

int main()
{
    int n;
    int count = 1;

    cout << "Enter the value of n: ";
    cin >> n;

    while (count<=n){
        cout << count << " " ;
        count++;
    }
    return 0;
}
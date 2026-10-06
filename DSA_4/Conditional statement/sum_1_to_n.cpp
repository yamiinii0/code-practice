// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 3;
//     int sum=0;

//     for (int i = 1; i <= n; i++){
//         sum += i;
//     }
//     cout << sum << endl;
//     return 0;
// }


#include <iostream>
using namespace std;

int main()
{
    int n = 3;
    int i = 1;
    int sum = 0;

    while(i<=n){
        sum +=i;
        i++;
    }
    cout << sum << endl;
    return 0;
}
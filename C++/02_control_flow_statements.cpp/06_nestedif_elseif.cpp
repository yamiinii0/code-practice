// if (condition1)
// {
//     if (condition2)
//     {
//         // code if both condition1 and condition2 are true
//     }
//  }

#include <iostream>
using namespace std;

int main(){

int x = 10;
int y = 5;

if (x > 0)
{
    if (y > 0)
    {
        cout << "Both x and y are positive";
    }
}

}

// if (condition1)
// {
//     if (condition2)
//     {
//         // code
//     }
//     else
//     {
//         // code
//     }
// }
// else
// {
//     // code
// }

#include <iostream>
using namespace std;

int main()
{

    int x = 10;
    int y = -2;

    if (x > 0)
    {
        if (y > 0)
        {
            cout << "Both positive";
        }
        else
        {
            cout << "x positive, y negative";
        }
    }
    else
    {
        cout << "x is negative";
    }
}
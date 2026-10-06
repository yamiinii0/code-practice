// recursion --> A function calling itself again and again

#include <iostream>
using namespace std;

int f(int x){
    if (x == 0){
        return 1; // base case
    }
    return x * f(x - 1); // recursive case

}

int main()
{
    int result = f(5); // calling the function with argument 5
    cout << "The result is: " << result << endl;
    return 0;
}
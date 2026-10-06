// condition ? statement_if_true : statement_if_false

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    string result = (num % 2 == 0) ? "The number is even." : "The number is odd.";
    cout << result << endl;

    return 0;
}
// palindrome number

#include <iostream>
using namespace std;

int main(){
    int num, originalNum, reversedNum = 0, remainder;
    cout << "Enter an integer: ";
    cin >> num;

    originalNum = num; // store the original number

    // reverse the number
    while (num != 0) {
        remainder = num % 10; // get the last digit
        reversedNum = reversedNum * 10 + remainder; // build the reversed number
        num /= 10; // remove the last digit
    }

    // check if the original number and reversed number are the same
    if (originalNum == reversedNum) {
        cout << originalNum << " is a palindrome." << endl;
    } else {
        cout << originalNum << " is not a palindrome." << endl;
    }

    return 0;
}
// Binary to Decimal Conversion in C++


#include <iostream>
using namespace std;

int binaryToDecimal(int binaryNum){
    int ans = 0;
    int pow = 1;
    while(binaryNum > 0){
        int rem = binaryNum % 10;
        binaryNum /= 10;

        ans += rem * pow;
        pow *= 2;
    }
    return ans;
}

int main(){
    int binaryNum = 101010;
    cout << binaryToDecimal(binaryNum) << endl;
}
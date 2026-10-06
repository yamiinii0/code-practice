// find out whether a number is negative, zero, or positive


#include <iostream> 
using namespace std;

int main() {
    int number = -2;

    if(number > 0){
        cout << "positive" << endl;
    }
    else if(number < 0){
        cout << "negative" << endl;
    }
    else{
        cout << "zero" << endl;
    }
    return 0;
}
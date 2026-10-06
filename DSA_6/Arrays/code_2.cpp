#include <iostream>
using namespace std;

int main(){
    int marks[5] = {99, 98, 97, 96, 95};
    int sum = 0;
    long long product = 1;

    for (int i = 0; i < 5; i++){
        cout << "Marks of student " << marks[i] << endl;
    }

    for (int i = 0; i < 5; i++){
        sum += marks[i];
    }

    for (int i = 0; i<5; i++){
        product *=marks[i];
    }
     
    cout << "Total marks: " << sum << endl;
    cout<<"Total product" << product << endl;

    return 0;
}
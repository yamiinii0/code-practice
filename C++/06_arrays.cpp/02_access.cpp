//Arrays are passed to functions by refernce by default.This means the function receives the address of the first element of the array.



#include <iostream>
using namespace std;

void printArray(int arr[], int size){   // or void printArray(int *arr, int size)
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}

int main() {
    int numbers[]= {10,20,30,40,50};
    int size = 5;
    printArray(numbers, size);
    return 0;
}
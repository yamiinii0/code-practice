// Write a function to reverse an array.

#include <stdio.h>

int reverse_array(int arr[], int n){
    for (int i=0; i<n/2; i++){
        int firstVal = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = firstVal;
    }
}

void printArray(int arr[], int n){
     for (int i=0; i<n; i++){
        printf("%d \t", arr[i]);
    }
}

int main (){
    int arr[] = {1,2,3,4,5};
    reverse_array(arr, 5);
    printArray(arr, 5);
    return 0;
}
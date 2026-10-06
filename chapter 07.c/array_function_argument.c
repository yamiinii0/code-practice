#include <stdio.h>

void printNumbers(int arr[], int n){
    for (int i =0; i<n; i++){
        printf("%d \t", arr[i]);
    }
    printf("\t\n");
}

int main (){
    int arr[5] = {10, 20, 30, 40, 50};
    printNumbers(arr, 5);
    return 0;
}
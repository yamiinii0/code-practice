// int *ptr = &arr[0] is same as int *ptr = arr
// arr is the name of the array and it represents the address of the first element of the array. 
// Therefore, arr and &arr[0] both point to the same memory location, which is the address of the first element of the array.
// array ka naam hi ek pointer hota hai jo array ke first element ke address ko point karta hai.

#include <stdio.h>

int main (){

    // input
    int aadhar[5];
    int *ptr = &aadhar[0];
    for (int i = 0; i<5; i++){
        printf("%d index:", i);
        scanf("%d", &aadhar[i]);
    }

    // output10
    for (int i = 0; i<5; i++){
        printf("%d index: %d\n", i, aadhar[i]);

    }

    return 0;
}
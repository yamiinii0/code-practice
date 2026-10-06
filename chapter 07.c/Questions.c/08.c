// WAP to print the largest no. in an array.

#include <stdio.h>

int main (){
    int num[6] = {22,56,97, 99, 88, 77};
     
    int largest = num[0]; // assume first number is largest

    for (int i=1; i<6; i++){
        if (num[i] > largest){
            largest = num[i];
        }
    }
    printf("largest number is %d\n", largest);
    return 0;
}
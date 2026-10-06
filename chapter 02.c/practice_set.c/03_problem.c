// Write a program to check whether a number is divisible by 97 or not.

#include <stdio.h>

int main (){
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n % 97 == 0) {
        printf("The number is divisible by 97.\n");
    } else {
        printf("The number is not divisible by 97.\n");
    }

    return 0;
}
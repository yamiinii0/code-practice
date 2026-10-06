// Write a program in C to find the maximum number between two numbers using a pointer.

#include <stdio.h>
int maximum(int *a, int *b) {
    if (*a > *b) {
        return *a;
    } else {
        return *b;
    }
}

int main (){
    int num1 = 10, num2 = 20;
    int max = maximum(&num1, &num2);
    printf("The maximum number is: %d\n", max);
    return 0;
}
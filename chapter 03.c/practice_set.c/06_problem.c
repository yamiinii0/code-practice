// Write a program to find greatest of four numbers entered by the user


#include <stdio.h>

int main (){
    float num1, num2, num3, num4;
    printf("Enter four numbers:\n");
    scanf("%f %f %f %f", &num1, &num2, &num3, &num4);
    float greatest = num1;

    if (num2 > greatest) {
        greatest = num2;
    }
    if (num3 > greatest) {
        greatest = num3;
    }
    if (num4 > greatest) {
        greatest = num4;
    }

    printf("The greatest number is: %f\n", greatest);

    return 0;
}
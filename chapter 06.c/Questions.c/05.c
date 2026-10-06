// Write a function to calculate the sum, product and average of 2 numbers. Print that average in main function.

#include <stdio.h>
void calculate(int a, int b, int *sum, int *product, float *average) {
    *sum = a + b;
    *product = a * b;
    *average = (float)(*sum) / 2;
}

int main (){
    int a = 3, b = 5;
    int sum, product;
    float average;
    calculate(a, b, &sum, &product, &average);
    printf("Sum: %d\n", sum);
    printf("Product: %d\n", product);
    printf("Average: %.2f\n", average);

    return 0;
}
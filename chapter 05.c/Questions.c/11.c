// Write a function to find square root of a number.

#include <stdio.h>
#include <math.h>

float squareRoot(double n) {
    return sqrt(n);
}
int main() {
    double n = 15.0;
    float result = squareRoot(n);
    printf("The square root of %.2f is %.2f\n", n, result);
    return 0;
}
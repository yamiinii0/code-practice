#include <stdio.h>

int main ()
{
   int a, b;
    printf("Enter value of a and b: ");
    scanf("%d %d", &a , &b);
    printf("The sum of two numbers is %d\n", a + b);
    printf("The difference of two numbers is %d\n", a - b);
    printf("The product of two numbers is %d\n", a * b);
    printf("The division of two numbers is %d\n", a / b); 
    printf("The modulus of two numbers is %d\n", a % b); // remainder
    return 0;
}

// this does not work in exponentiation in C
// int power = a^b;
// use math.h library for exponentiation
// #include <math.h>
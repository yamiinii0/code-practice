// Write a program to calculate simple interest for a set of values representing principal, number of years and rate of interest.//


#include <stdio.h>

int main ()
{
    float principal, rate, time, simple_interest;
    printf("Enter principal amount:");
    scanf("%f", &principal);
    printf("Enter rate of interest:");
    scanf("%f", &rate);
    printf("Enter time in years:");
    scanf("%f", &time);

    simple_interest = (principal * rate * time) / 100;
    printf("Simple interest is: %.2f\n", simple_interest);

    return 0;
}
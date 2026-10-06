// Calculate income tax paid by an employee to the government as per the slabs mentioned below:
//  Income Slab Tax
//  2.5 – 5.0L 5%
//  5.0L - 10.0L 20%
//  Above 10.0L 30%
// Note that there is no tax below 2.5L. Take income amount as an input from the user

#include <stdio.h>

int main (){
    float income;
    printf(" Enter your income in lakhs:\n");
    scanf("%f", &income);

    float tax = 0.0;
    if (income < 2.5) {
        tax = 0.0;
    }

    else if (income >= 2.5 && income < 5.0)
     {
        tax += income * 0.05;
    } 

    else if (income >= 5.0 && income < 10.0)
     {
        tax += income * 0.2;
    } 

    else if (income >= 10.0) {
        tax += income * 0.3;
    }

    printf("The tax to be paid is: %.2f lakhs\n", tax);

    return 0;
}
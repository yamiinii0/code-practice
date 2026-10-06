#include <stdio.h>

int main (){
    int a = 5;
    int b = 6.2;
    float c = a/b;
    int d = 2.7;
    printf("The value of c (a/b) is: %f\n", c);
    printf("The value of d is: %d\n", d);

    return 0;
}

// int k = 3.0/9 , k will be 0 because 3.0/9 is 0.3333 and when assigned to int it truncates the decimal part
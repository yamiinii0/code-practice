#include <stdio.h>

int main (){
    int n = 20;
    float m  = 32.23;

    n = (int) m; // typecasting float to int
    printf("The value of n is: %d\n", n);

    return 0;
}
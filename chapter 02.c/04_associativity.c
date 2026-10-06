#include <stdio.h>

int main (){

    int a = 3;
    int b = 6;
    int c = 9;
    printf("The value is %d\n", a*b/c); // associativity is left to right for *, / and %
    printf("The value is %d\n", c/b*a); // associativity is left to right for *, / and %
    printf("The value is %d\n", 3*b/2*c + 7*a);
    // stepwise evaluation:
    // 3 x 6 / 2 x 9 + 7 x 3
    // 18/2 x 9 + 21
    // 9 x 9 + 21
    // 81 + 21
    // 102
    return 0;
}
#include <stdio.h>

int main (){
    int a = 1; int b = 1; //a = 0 b = 0 , result = 0

    printf("The value of a and b is %d\n", a&&b);
    printf("The value of a or b is %d\n", a||b);
    printf("The value of not(a) is %d\n", !a);
    printf("The value of not(b) is %d\n", !b);

    int c = 0; int d = 1;
    
    printf("The value of c and d is %d\n", c&&d);
    printf("The value of c or d is %d\n", c||d);
    printf("The value of not(c) is %d\n", !c);
    printf("The value of not(d) is %d\n", !d);


    return 0;
}
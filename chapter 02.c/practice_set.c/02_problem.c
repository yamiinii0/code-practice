// What data type will 3.0/8 – 2 return?
// 3.0 is a float, 8 is an integer, so 3.0/8 evaluates to a float.
// Subtracting an integer (2) from a float results in a float.
// Therefore, the result will be of type float.

#include <stdio.h>

int main (){
    float result = 3.0/8 - 2;
    printf("The result of 3.0/8 - 2 is: %f\n", result);

    return 0;
}
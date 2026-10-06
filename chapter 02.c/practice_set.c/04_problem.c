// Explain step by step evaluation of 3*x/y – z+k, where x=2, y=3, z=3, k=1

#include <stdio.h>

int main (){
    int x = 2;
    int y = 3;
    int z = 3;
    int k = 1;
    int result;

    printf("%d * %d / %d - %d + %d\n", 3, x, y, z, k);
    result = 3*x/y - z+k;
    // Step 1: 3 * x = 3 * 2 = 6
    // Step 2: 6 / y = 6 / 3 = 2
    // Step 3: 2 - z = 2 - 3 = -1
    // Step 4: -1 + k = -1 + 1 = 0
    printf("The result is: %d\n", result);

    return 0;
}
// Make your own pow function.

#include <stdio.h>

int power(int base, int exp) {
    if (exp == 0)
        return 1;
    return base * power(base, exp - 1);
}

int main() {
    int b = 3, e = 3;
    printf("%d^%d = %d\n", b, e, power(b, e));
    return 0;
}
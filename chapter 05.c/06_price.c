#include <stdio.h>
void calcPrice(float value)
{
    value = value + (0.18 * value);
    printf("Final price is : %f\n", value);
}

int main (){
    float value = 100.0;
    calcPrice(value);
    return 0;
}
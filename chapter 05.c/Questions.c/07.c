// write a function to convert celsius to fahrenheit

#include <stdio.h>
float celsius_to_fahrenheit(float celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}
int main(){
    float result = celsius_to_fahrenheit(37.0);
    printf("37.0 C is equal to %.2f F\n", result);
    return 0;
}
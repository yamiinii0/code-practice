// Write a function to print "Hot" or "Cold" depending on the temperature user enters.

#include <stdio.h>
void checkTemperature(float temp) {
    if (temp >= 30.0) {
        printf("Hot\n");
    } else {
        printf("Cold\n");
    }
}
int main(){
    checkTemperature(30.5);
    printf("Temperature check completed.\n");
    return 0;
}
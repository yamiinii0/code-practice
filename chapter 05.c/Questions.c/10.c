// Write a function to find sum of digits of a number.

#include <stdio.h>
int sum(int a, int b){
    return a+b;
}
int main(){
    int result = sum(10,200);
    printf("The sum of the digits is = %d\n", result);
    return 0;
}
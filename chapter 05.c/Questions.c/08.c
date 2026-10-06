// Write a function to calculate Percentage of a student from marks in science , math and sanskrit.

#include <stdio.h>
int calcPercentage (int maths, int science, int sanskrit){
    return (( maths + science + sanskrit) / 3);
}

int main(){
    int result = calcPercentage(85, 90, 99);
    printf("Percentage of the student is %d%%\n", result);
    return 0;
}
#include <stdio.h>

int main (){
    // 2 student x 3 marks
    int marks[2][3]; // _ _ _ | _ _ _

    marks[0][0] = 90;
    marks [0][1] = 95;
    marks[0][2] = 99;

    marks [1][0] = 87;
    marks [1][1] = 89;
    marks [1][2] = 92;
    printf("%d", marks[0][2]);

    return 0;
}
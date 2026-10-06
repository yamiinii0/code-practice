//  Quiz: Write a program to find grade of a student given his marks based on below:
// 90 – 100 => A
// 80 – 90 => B
// 70 – 80 => C
// 60 – 70 => D
// 50 – 60 => E
// <50 => F




#include <stdio.h>

int main (){
    int grade;
    printf(" enter your grade (0-100): ");
    scanf("%d", &grade);

    if (grade >= 90 && grade <= 100) {
        printf(" Your grade is A+\n");
    } else if (grade >= 80 && grade < 90) {
        printf(" Your grade is B\n");
    } else if (grade >= 70 && grade < 80) {
        printf(" Your grade is C\n");
    } else if (grade >= 60 && grade < 70) {
        printf(" Your grade is D\n");
    } else if (grade >= 60 && grade < 50) {
        printf(" Your grade is F\n");
    } else {
        printf(" Invalid grade entered\n");
    }

    return 0;
}
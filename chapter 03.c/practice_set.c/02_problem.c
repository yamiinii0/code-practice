// Write a program to determine whether a student has passed or failed. To pass, a student requires a total of 40% and at least 33% in each subject. Assume there are three subjects and take the marks as input from the user.


#include <stdio.h>

int main (){
    int marks1, marks2, marks3;
    
    printf("Enter the marks of subject 1: ");
    scanf("%d", &marks1);
    
    printf("Enter the marks of subject 2: ");
    scanf("%d", &marks2);
    
    printf("Enter the marks of subject 3: ");
    scanf("%d", &marks3);
    
    int total = marks1 + marks2 + marks3;
    float percentage = (float)total / 3;
    
    if (percentage >= 40 && marks1 >= 33 && marks2 >= 33 && marks3 >= 33) {
        printf("The student has passed.\n");
    } 
    
    else {
        printf("The student has failed.\n");
    }

    return 0;
}
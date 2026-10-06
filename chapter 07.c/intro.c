/* arrays -->
collection of similar data types stored at contiguous memory locations */

// syntax -->
// data_type array_name[size];
// int marks[10]; --->  array of 10 integers

// follows 0 based indexing 

// Input & Output -->

// scanf("%d", &marks[0]);  // input for first element
// printf("%d", marks[0]);  // output for first element


#include <stdio.h>

int main (){
    int marks[3];
    printf(" enter physics marks: ");
    scanf("%d", &marks[0]);
    printf(" enter chemistry marks: ");
    scanf("%d", &marks[1]);
    printf(" enter maths marks: ");
    scanf("%d", &marks[2]);
    printf(" physics = %d\n chemistry = %d\n maths = %d\n", marks[0], marks[1], marks[2]);
    
    return 0;
}
// pointer to pointer ---->
// A variable that stores the memory address of another pointer.

// syntax 
// int **pptr; // pointer to pointer to int
// char **pptr; // pointer to pointer to char
// float **pptr; // pointer to pointer to float


#include <stdio.h>
int main()
{
    int x = 10;
    int *ptr = &x; // pointer to int
    int **pptr = &ptr; // pointer to pointer to int

    printf("Value of x: %d\n", x); // 10
    printf("Value at ptr: %d\n", *ptr); // 10
    printf("Value at pptr: %d\n", **pptr); // 10

    return 0;
}
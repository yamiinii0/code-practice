// Pointer --->  A variable that stores the nenory address of another variable.

// * ---> value at address operator (dereference operator)
// & ---> address of operator


#include <stdio.h>

int main (){
    int age = 22;
    int *ptr = &age;
    int _age = *ptr;

    printf("%d\n", age);
    printf("%d\n", _age);
    printf("%u\n", ptr);
    printf("%u\n", &age);
    printf("%d\n", *ptr);
    printf("%d\n", &ptr);
    printf("%u\n", *(&age));

    return 0;
}



// Declaring a pointer

// int *ptr , char *ptr, float *ptr, double *ptr;

// formt specifier

// printf("%p", ptr); // to print the address stored in the pointer variable
// printf("%p", &age); // to print the address of the variable age
// printf("%d", *ptr); // to print the value stored at the address pointed by the pointer variable ptr
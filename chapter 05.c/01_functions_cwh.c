#include <stdio.h>

// function prototype
int sum(int, int);

// function definition
int sum(int a, int b)
{
    return a + b;
}

int main()
{
    int a = 5, b = 20;

    printf(" The sum is : %d\n", sum(a, b)); // function call

    return 0;
}










// FUNCTION PROTOTYPE
/* A function prototype informs the compiler about a function that will be defined later in
the program. It specifies the function's name, return type, and parameters (if any). */

// FUNCTION CALL
/* A function call instructs the compiler to execute the function's body when the call is
made */
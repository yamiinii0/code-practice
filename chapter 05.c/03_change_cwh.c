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


/* syntax of function prototype
return_type function_name(parameter_list); */

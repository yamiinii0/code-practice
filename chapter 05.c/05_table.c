#include <stdio.h>

void printTable (int n) // parameter or formal parameter
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", n, i, n*i);
    }
}

int main (){
    int n;
    printf("Enter a number :\n");
    scanf ("%d" , &n);
    printTable(n);  // argument or actual parameter

    return 0;
}
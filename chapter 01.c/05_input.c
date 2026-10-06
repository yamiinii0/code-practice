#include <stdio.h>
int main ()
{
    int a;
    float n = 3.14;
    char c ='A'; 
    printf("Enter an integer: ");
    scanf("%d", &a);
    printf("You entered: %d\n", a);
    printf("Float value: %.2f\n", n);
    printf("Character value: %c\n", c);
    return 0;
}
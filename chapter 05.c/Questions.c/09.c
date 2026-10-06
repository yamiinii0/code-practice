// Write a function to print n terms of Fibonacci series.


// using loop --->


#include <stdio.h>
void printFibonacci(int n) {
    int a = 0, b = 1, next;
    printf("Fibonacci Series: \n"); 
    for (int i = 0; i < n; i++) {
        printf("%d\n ", a);
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
}
int main() {
    int n = 20; 
    printFibonacci(n);
    return 0;
}


// using recursive function to print n terms of Fibonacci series.

#include <stdio.h>

int fib(int n) {
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int n, i;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci series: ");
    for (i = 0; i < n; i++) {
        printf("%d ", fib(i));
    }

    return 0;
}
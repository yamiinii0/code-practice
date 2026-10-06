// sum of first n natural numbers

#include <stdio.h>

int sum_of_natural_numbers(int n){
    if (n == 0) {
        return 0;   // base case: sum of 0 natural numbers is 0
    }
    return sum_of_natural_numbers(n - 1) + n;  // recursive step
}

int main (){
    printf("%d\n", sum_of_natural_numbers(10));
    return 0;
}

// recursion is a programming technique where a function calls itself in order to solve a problem.
// It typically involves a base case that stops the recursion and a recursive case that breaks the problem into smaller subproblems.
// In this example, the function `sum_of_natural_numbers` calculates the sum of the first `n` natural numbers by calling itself with `n - 1` until it reaches the base case of `n == 0`.
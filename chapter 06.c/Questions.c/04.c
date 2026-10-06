// Will the address output be same?

// --> no, the address output will not be the same. 
// In the main function, the variable 'n' is declared and its address is printed.
// When the function 'printAddress' is called, it receives a copy of 'n' (passed by value), and thus it has its own local variable 'n' with a different memory address.
// Therefore, the addresses printed in the main function and in the 'printAddress' function will be different.

#include <stdio.h>
void printAddress(int n){
    printf("%u\n", &n);
}

int main (){
    int n = 4;

    printf("%u\n", &n);
    printAddress(n);

    return 0;
}

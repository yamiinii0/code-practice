// Print Hello World 5 times usinf recursion.

#include <stdio.h>
void printHW(int count){
    printf("Hello world\n");
    if(count < 5){
        printHW(count + 1);
    }
}
int main(){
    printHW(1);
    return 0;
}
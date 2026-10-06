#include <stdio.h>

int main (){
    if(1){
        printf("This if is executed because the condition is non-zero (true)\n");
    }
    if(0){
        printf("This if is not executed because the condition is zero (false)\n");
    }
    if(2435){
        printf("This if is executed because the condition is non-zero (true)\n");
    }

    return 0;
}
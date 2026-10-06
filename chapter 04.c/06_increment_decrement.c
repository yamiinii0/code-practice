#include <stdio.h>

int main (){
    int i = 5;
    printf("The value of i is: %d\n" , i);

    i = i+5;
    printf("The value of i after adding 5 is: %d\n" , i);

    printf("The value of i after incrementing by 1 is: %d\n" , ++i);
    
    i+=4;
    printf("The value of i is: %d\n" , i);

    // i++ prints first and then increments (post-increment)
    // ++i increments first and then prints (pre-increment)
    return 0;
    
}


// i+=2 is equivalent to i = i + 2
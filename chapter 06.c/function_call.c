// pointers in function call -->

// call by value --> value pass krte hai hum as an argument
// call by reference --> address pass krte hai hum as an argument


#include <stdio.h>
void square(int n){
    n = n*n;
    printf("Square = %d\n", n); // yaha pe hum kuch bhi change kr skte hai but main function me koi value change nhi hoga kyuki hum call by value kr rhe hai
} 

void _square (int *n){
    *n = (*n)*(*n);
    printf("Square = %d\n", *n); // yaha pe hum kuch bhi change kr skte hai aur main function me bhi value change hoga kyuki hum call by reference kr rhe hai
}

int main (){
    int no = 5;
    square(no);
    printf("the no. is %d\n", no);

    _square(&no);
    printf("the no. is %d\n", no);
    
    return 0;
}
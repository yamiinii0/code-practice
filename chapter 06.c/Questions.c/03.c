// swap two numbers, a & b.

#include <stdio.h>

// call by value
void swap (int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("a= %d & b= %d\n", a, b); // yaha pe a & b swap ho gye hai but main function me koi change nhi hoga kyuki hum call by value kr rhe hai
}

// call by reference
void _swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    printf("a= %d & b= %d\n", *a, *b); // yaha pe a & b swap ho gye hai aur main function me bhi value change hoga kyuki hum call by reference kr rhe hai
}

int main (){
    int x = 5, y = 10;
    swap(x, y); 
    printf("x= %d & y= %d\n", x, y); // yaha pe x & y swap nhi hue hai kyuki hum call by value kr rhe hai, hum call by reference krne ke liye address pass kr skte hai as an argument

    _swap(&x, &y);
    printf("x= %d & y= %d\n", x, y); // yaha pe x & y swap ho gye hai kyuki hum call by reference kr rhe hai, hum call by value krne ke liye value pass kr skte hai as an argument

    return 0;
}
// int arr[] = {1,2,3,4,5};

// For the given array, what will the following give?
// *(arr+2)  &   *(arr+5)


#include <stdio.h>

int main (){
    int arr[] = {1,2,3,4,5};

    printf("%d\n", *(arr+2)); // 3

    printf("%p\n", *(arr+5)); // This would be out of bounds, but if we assume it's *(arr+4), it would be 5 
    
    return 0;
}
// pointer can be incremented or decremented.


// #include <stdio.h>

// int main (){
    // Case 1:
    // int age = 22;
    // int *ptr = &age;
    // printf("ptr = %u\n", ptr);
    // ptr++;
    // printf("ptr = %u\n", ptr);
    // ptr--;
    // printf("ptr = %u\n", ptr);

    // Case 2:
    // float price = 20.00;
    // float *ptr = &price;
    // printf("ptr = %u\n", ptr);
    // ptr++;
    // printf("ptr =%u\n", ptr);

    // case 3:

    // char star = '*';
    // char *ptr= &star;
    // printf("ptr= %u\n", ptr);
    // ptr++;
    // printf("ptr= %u\n", ptr);

//     return 0;
// }

// we can subtract one pointer from another [ same data type hona chahiye]
// we can also compare two pointers using relational operators.


#include <stdio.h>

int main (){
    int age = 22;
    int _age = 23;
    int *ptr = &age;
    int *_ptr = &_age;

    printf("%u, %u, difference = %u\n", ptr, _ptr, ptr - _ptr);
    _ptr = &age;
    printf("comparison= %u\n", ptr == _ptr);
    return 0;
}



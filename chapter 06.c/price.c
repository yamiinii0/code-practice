#include <stdio.h>

int main (){
    float price = 100.00;
    float *ptr = &price;
    float _price = *ptr;
    
    printf("Price: %.2f\n", price);
    printf("Price via pointer: %.2f\n", _price);
    printf("Address of price: %p\n", ptr);
    return 0;
}


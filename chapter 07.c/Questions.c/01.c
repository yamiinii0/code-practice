// WAP to enter price of 3 items & print their final cost with gst.

#include <stdio.h>

int main (){
    float price [3];
    printf("enter 3 price =");
    scanf("%f", &price[0]);
    scanf("%f", &price[1]);
    scanf("%f", &price[2]);
    printf("final cost = %.2f\n", price[0] + price[1] + price[2] + (price[0] + price[1] + price[2]) * 0.18);
    return 0;
}
//Calculate the area of a circle and modify the same program to calculate the volume of a cylinder given its radius and height.//


#include <stdio.h>

int main ()
{
    float radius, area;
    float height,volume;
    printf("Enter radius of circle:");
    scanf("%f", &radius);

    area = 3.14 * radius * radius;
    printf("The area of circle is %.2f\n" , area);

    printf ("enter height of cylinder:");
    scanf("%f", &height);

    
    volume = 3.14 * radius * radius * height;
    printf("The volume of cylinder is: %.2f\n", volume);

    return 0;
}
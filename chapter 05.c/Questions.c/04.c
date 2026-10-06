// Write functions to calculate area of a square, a circle, a rectangle.

#include <stdio.h>
void area_of_square(float side)
{
    printf("Area of square: %f\n", side * side);
}
void area_of_circle(float radius)
{
    printf("Area of circle: %f\n", 3.14 * radius * radius);
}
void area_of_rectangle(float length, float width)
{
    printf("Area of rectangle: %f\n", length * width);
}

int main(){
    area_of_square(4);
    area_of_circle(5);
    area_of_rectangle(4, 6);
    return 0;
}
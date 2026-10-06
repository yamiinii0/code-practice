//Write a C program to calculate area of a rectangle:
// b. Using user inputs.


#include <stdio.h>

int main ()
{
  int length, breadth, area;
  printf("Enter length and breadth:");
  scanf("%d %d", &length, &breadth);

  area = length * breadth;

  printf("The area of rectangle is:%d\n", area); 
    return 0;
}
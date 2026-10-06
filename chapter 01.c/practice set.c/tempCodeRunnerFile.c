#include <stdio.h>

int main ()
{
  int length, breadth, area;
  printf("Enter length and breadth: %d %d");
  scanf("%d %d", &length, &breadth);
  area = length*breadth;
  printf("The area of rectangle is:%d", area); 
    return 0;
}
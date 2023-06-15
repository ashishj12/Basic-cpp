#include<stdio.h>
 
int main() {
 
   int rad;
   float PI = 3.14, area, ci;
 
   printf("Enter radius of circle: \n");
   scanf("%d", &rad);
 
   area = PI * rad * rad;
   printf("Area of circle : %f \n", area);
 
   ci = 2 * PI * rad;
   printf("Circumference : %f \n", ci);
 
   return (0);
}
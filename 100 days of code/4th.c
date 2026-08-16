#include<stdio.h>

void main() 
{
    float r,area,circumference;
    printf("Radius of circle =");
    scanf("%f",&r);

    area=3.14*r*r;
    circumference=2*3.14*r;

    printf("Area of circle=%.2f \n", area);
    printf("Circumference of circle=%.2f ", circumference);
}
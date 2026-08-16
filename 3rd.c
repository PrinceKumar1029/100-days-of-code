#include<stdio.h>

void main()
{
    float l,b,area,perimeter;

    printf("Length of rectangle in m= ");
    scanf("%f" ,&l);
    printf("Breadth of rectangle in m= ");
    scanf("%f" ,&b);

    area=l*b;
    perimeter=2*(l+b);

    printf("Area of rectangle=%.2f m\n", area);
    printf("Perimeter of rectangle=%.2f m\n", perimeter);
}
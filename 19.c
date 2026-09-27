//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

/*
Sample Test Cases:
Input 1:
3 3 3
Output 1:
Equilateral

Input 2:
3 3 4
Output 2:
Isosceles

Input 3:
2 3 4
Output 3:
Scalene

*/
#include<stdio.h>

void main()
{
    float a,b,c;

    printf("Enter the three sides of the triangle: ");
    scanf("%f %f %f",&a,&b,&c);

    if (a>0 && b>0 && c>0 && a+b>c && a+c>b && b+c>a)
    {
        printf("The given sides form a valid triangle.\n");
        if (a==b && b==c)
        {
            printf("The triangle is equilateral.");
        }
        else if (a==b || b==c || a==c)
        {
            printf("The triangle is isosceles.");
        }
        else
        {
            printf("The triangle is scalene.");
        }
    }
    else
    {
        printf("The given sides do not form a valid triangle.");
    }
}
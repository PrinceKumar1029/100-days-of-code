#include<stdio.h>

void main()
{
    float Celsius, Fahrenheit;

    printf("Celsius = ");
    scanf("%f", &Celsius);

    Fahrenheit=(Celsius * 9 / 5) + 32;

    printf("Fahrenheit = %f F", Fahrenheit);
}

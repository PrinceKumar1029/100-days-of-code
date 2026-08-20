#include <stdio.h>

void main() 
{
    int sec, hr, min;

    printf("Enter time in seconds: ");
    scanf("%d", &sec);

    hr = sec/3600;
    min = sec%3600/60;
    sec = sec%60;

    printf("%d:%d:%d", hr, min, sec);
}
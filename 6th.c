#include <stdio.h>

void main()

{
    int a,b,c;
    printf("Enter the value of a and b: ");
    scanf("%d %d",&a,&b);
    
    c=a;
    a=b;
    b=c;

    printf("After swapping: a=%d b=%d",a,b);

}
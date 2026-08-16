#include<stdio.h>

void main()
{
    int a,b,sum,sub,product,quotient;
    
    printf("Enter the Value of a and b=");
    scanf("%d %d", &a, &b);

    
    sum = a+b;
    sub = a-b;
    product = a*b;
    quotient = a/b;


      printf("Sum=%d, Diff=%d, Product=%d, Quotient=%d\n", sum, sub, product, quotient);

}

/*Step 1: Start
Step 2: Declare variables a, b, sum
Step 3: Read (input) values of a and b from the user
Step 4: sum = a + b
Step 5: Print sum
Step 6: Stop*/
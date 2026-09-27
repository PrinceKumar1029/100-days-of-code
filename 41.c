//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include <stdio.h>

int main()
{
    int n, first, last, temp, power = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    // Find the last digit
    last = n % 10;

    // Find the first digit and place value
    while (temp >= 10)
    {
        temp = temp / 10;
        power = power * 10;
    }

    first = temp;

    // Remove the first and last digit
    n = n % power;
    n = n / 10;

    // Put last digit at first position
    n = last * power + n * 10 + first;

    printf("After swapping = %d", n);

    return 0;
}
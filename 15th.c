//Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

/*
Sample Test Cases:
Input 1:
A
Output 1:
Uppercase alphabet

Input 2:
a
Output 2:
Lowercase alphabet

Input 3:
3
Output 3:
Digit

Input 4:
#
Output 4:
Special character

*/
#include <stdio.h>
int main()
{
char chr;

printf("Enter Character = ");
scanf("%c", &chr);

if (chr >= 'A' && chr <='Z')
{
printf("%c is Uppercase alphabet",chr);
}
else if (chr>= 'a' && chr<= 'z')
{
    printf("%c is Lowercase alphabet", chr);
} 
else if (chr>= '0' && chr<= '9')
{
     printf("%c is Digit", chr);
}
else 
{
    printf("%c is Special character", chr);
}
return 0;
}
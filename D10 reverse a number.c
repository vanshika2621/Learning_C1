/*Write a program to reverse a given number*/
#include <stdio.h>

int main()
{
    int num, reversed = 0, remainder;

    printf("Enter any number: ");
    scanf("%d", &num);

    while (num != 0)
    {
        remainder = num % 10;            
        reversed = reversed * 10 + remainder; 
        num = num / 10;                  
    }

    printf("Reversed number = %d", reversed);

    return 0;
}

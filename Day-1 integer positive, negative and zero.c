/* Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.*/

#include<stdio.h>

int main() 
{
    int integer ;
    printf("Enter any integer: ");
    scanf("%d", &integer);

    if (integer == 0 )
       printf("The number is Zero "); 
    if (integer >= 0 ) 
      printf("The number is positive "); 
    else 
      printf("The number is negative ");
    return 0 ; 
}
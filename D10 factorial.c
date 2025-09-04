/*Write a program to calculate the factorial of a number*/ 
#include<stdio.h> 

int main()
{
    int num ;
    printf("Enter any number: ");
    scanf("%d", &num);

    int i = 1;
    int fact = 1;

    while (i <= num)
    {
        fact = fact * i;
        i++;
    }

    printf("The factorial of the number is %d", fact);
    return 0;
}

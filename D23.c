/*Write a program to convert temperature from Celsius to Fahrenheit*/
#include<stdio.h>

int main()
{
    float C , F ;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &C);
    F = (C*9/5) + 32 ;
    printf("The Temperature in Fahrenheit is: %.2f" , F);
}
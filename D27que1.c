//Write a program to calculate simple and compound interest for given principal, rate, and time.


#include <stdio.h>
#include <math.h>  

int main() 
{ 
    float principal, rate, time;
    float simple_interest, compound_interest, amount;

    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the rate of interest (in %%): ");
    scanf("%f", &rate);

    printf("Enter the time (in years): ");
    scanf("%f", &time);

    simple_interest = (principal * rate * time) / 100;

    amount = principal * pow((1 + rate / 100), time);
    compound_interest = amount - principal;

    printf("\n--- Interest Calculation ---\n");
    printf("Principal Amount: %.2f\n", principal);
    printf("Rate of Interest: %.2f%%\n", rate);
    printf("Time: %.2f years\n", time);
    printf("Simple Interest: %.2f\n");
} 


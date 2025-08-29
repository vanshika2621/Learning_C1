/*Write a program to assign grades based on a percentage input*/ 
#include<stdio.h> 
int main()
{
    float percent;
    printf("Please enter your percentage: ");
    scanf("%f", &percent); 

    if (percent >= 90)
        printf("Grade A");
    else if (percent >= 80 && percent < 90)
        printf("Grade B");
    else if (percent >= 70 && percent < 80)
        printf("Grade C");
    else if (percent >= 60 && percent < 70)
        printf("Grade D");
    else 
        printf("Fail");

    return 0; 
}

/* Write a program to input three numbers and find the largest among them using if–else */
#include <stdio.h>

int main()
{
    int n1 = 0, n2 = 0, n3 = 0;

    printf("Enter first number: ");
    scanf("%d", &n1);

    printf("Enter second number: ");
    scanf("%d", &n2);

    printf("Enter third number: ");
    scanf("%d", &n3);

    if (n1 >= n2 && n1 >= n3)
        printf("First number (%d) is the largest.\n", n1);
    else if (n2 >= n1 && n2 >= n3)
        printf("Second number (%d) is the largest.\n", n2);
    else
        printf("Third number (%d) is the largest.\n", n3);

    return 0;
}

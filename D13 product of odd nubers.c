/*Write a program to find the product of odd digits of a number*/
#include <stdio.h>

int main() {
    int num, digit;
    int product = 1;
    int hasOdd = 0;   // To check if at least one odd digit is present

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("The number has no odd digits.\n");
        return 0;
    }

    while (num > 0) {
        digit = num % 10;
        if (digit % 2 != 0) {   // If digit is odd
            product *= digit;
            hasOdd = 1;
        }
        num /= 10;
    }

    if (hasOdd)
        printf("Product of odd digits = %d\n", product);
    else
        printf("The number has no odd digits.\n");

    return 0;
}

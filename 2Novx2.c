#include <stdio.h>

int main() {
    int num, sum = 0, remainder;

    // Ask user for input
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Calculate sum of digits
    while (num != 0) {
        remainder = num % 10;
        sum += remainder;
        num /= 10;
    }

    // Display result
    printf("Sum of digits = %d\n", sum);

    return 0;
}

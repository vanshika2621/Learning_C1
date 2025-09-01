/* Write a program to calculate electricity bill based on units consumed */
#include <stdio.h>

int main() {
    int units;
    int bill = 0;

    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    if (units <= 100) {
        bill = units * 5;   // ₹5 per unit up to 100
    }
    else {
        bill = (100 * 5) + (units - 100) * 9;  // ₹9 per unit after 100
    }

    printf("Electricity Bill: ₹%d\n", bill);

    return 0;
}

#include <stdio.h>

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};
    int sum = 0;
    int i;

    printf("Array elements: ");

    for (i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
        sum += numbers[i];
    }

    printf("\nSum: %d\n", sum);

    return 0;
}
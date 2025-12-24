#include <stdio.h>

int main() {
    int a[5], i, sum = 0;
    float avg;

    for (i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    avg = sum / 5.0;
    printf("Sum = %d\nAverage = %.2f", sum, avg);
    return 0;
}

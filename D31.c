#include <stdio.h>

int main() {
    int n, i = 1, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    while(i <= n) {
        sum += i;
        i++;
    }

    printf("Sum of first %d natural numbers = %d\n", n, sum);
    return 0;
}

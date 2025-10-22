#include <stdio.h>

int main() {
    int n, i, j;
    int binaryNum[32];
    i = 0;
    if (scanf("%d", &n) != 1) return 1;

    if (n == 0) {
        printf("0\n");
        return 0;
    }

    while (n > 0) {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }

    for (j = i - 1; j >= 0; j--) {
        printf("%d", binaryNum[j]);
    }
    printf("\n");

    return 0;
}

#include <stdio.h>

int main() {
    int arr[5], i;
    int *p = arr;

    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", p + i);
    }

    printf("Array elements using pointer:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", *(p + i));
    }

    return 0;
}

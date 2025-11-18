#include <stdio.h>

int main() {
    int arr[5];
    int *ptr = arr;

    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", ptr + i);  // storing using pointer
    }

    printf("You entered:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i));  // accessing using pointer
    }

    return 0;
}

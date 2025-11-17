#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr;

    ptr = arr; // pointer stores base address of array

    printf("Array elements using pointer:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i)); // accessing elements using pointer arithmetic
    }

    return 0;
}

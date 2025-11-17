#include <stdio.h>

int main() {
    int arr[7] = {12, 45, 7, 89, 23, 56, 10};
    int *ptr = arr;
    int max = *ptr;  // first element

    for (int i = 1; i < 7; i++) {
        if (*(ptr + i) > max) {
            max = *(ptr + i);
        }
    }

    printf("Maximum element = %d", max);

    return 0;
}

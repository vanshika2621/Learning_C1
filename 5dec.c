#include <stdio.h>

int main() {
    int arr[5];
    int i, sum = 0;

    printf("Enter 5 numbers: ");

    // Taking input in array
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    // Display sum
    printf("Sum = %d\n", sum);

    return 0;
}

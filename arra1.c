#include <stdio.h>

int main() {
    int n, i;
    int arr[100];  // Array declaration

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("You entered: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nSum of array elements: ");
    int sum = 0;
    for (i = 0; i < n; i++) {
        sum += arr[i];
    }
    printf("%d\n", sum);

    return 0;
}

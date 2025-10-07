#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    int sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Array elements are: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nSum of array elements = %d\n", sum);

    return 0;
}

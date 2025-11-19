#include <stdio.h>
#include <stdlib.h>

int findSum(int *arr, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    return sum;
}

int findMax(int *arr, int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];
    return max;
}

int findMin(int *arr, int n) {
    int min = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] < min)
            min = arr[i];
    return min;
}

int main() {
    int n, *arr;

    printf("Enter size of array: ");
    scanf("%d", &n);

    arr = (int *) malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed!");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Sum = %d\n", findSum(arr, n));
    printf("Max = %d\n", findMax(arr, n));
    printf("Min = %d\n", findMin(arr, n));

    free(arr);
    return 0;
}

#include <stdio.h>

int main() {
    int n; 
    int i;
    int temp;
    int start;
    int end;

    if (scanf("%d", &n) != 1 || n < 1 || n > 100) {
        return 1;
    }

    int arr[100]; 

    for (i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            return 1;
        }
    }

    start = 0;
    end = n - 1;

    while (start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        
        start++;
        end--;
    }

    for (i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}
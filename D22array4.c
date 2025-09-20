//Count even and odd numbers in an array.

#include <stdio.h>

int main() {
    
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    int n = sizeof(numbers) / sizeof(numbers[0]);

    int even_count = 0;
    int odd_count = 0;

    
    printf("Scanning the array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", numbers[i]);
        
        if (numbers[i] % 2 == 0) {
            even_count++;
        } 
        
        else {
            odd_count++;
        }
    }
    printf("\n");

    
    printf("\n--- Results ---\n");
    printf("Even numbers: %d\n", even_count);
    printf("Odd numbers: %d\n", odd_count);

    return 0;
}

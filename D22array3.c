//Count positive, negative, and zero elements in an array

#include <stdio.h>

int main() {
    int numbers[] = {10, -5, 0, 7, -2, -9, 0, 15, 0, -3};

    
    int n = sizeof(numbers) / sizeof(numbers[0]);

    int positive_count = 0;
    int negative_count = 0;
    int zero_count = 0;

    printf("Scanning the array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", numbers[i]);
        
        if (numbers[i] > 0) {
            positive_count++;
        } 
       
        else if (numbers[i] < 0) {
            negative_count++;
        } 
        
        else {
            zero_count++;
        }
    }
    printf("\n");

    
    printf("\n--- Results ---\n");
    printf("Positive elements: %d\n", positive_count);
    printf("Negative elements: %d\n", negative_count);
    printf("Zero elements: %d\n", zero_count);

    return 0;
}

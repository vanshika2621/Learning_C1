#include <stdio.h>

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};
    int sum = 0;
    int i; 

    int array_size = sizeof(numbers) / sizeof(numbers[0]);
    
    printf("Array elements: ");

    for (i = 0; i < array_size; i++) {
        printf("%d", numbers[i]); 
        sum = sum + numbers[i]; 
        
        if (i < array_size - 1) {
            printf(", ");
        }
    }
    
    printf("\n"); 

    printf("The total sum of all elements is: %d\n", sum);
    
    return 0;
}
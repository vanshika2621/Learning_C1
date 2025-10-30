#include <stdio.h>

// Define the dimensions for clarity and easy modification
#define ROWS 3
#define COLS 4

int main() {
    // 1. Declaration and Initialization
    // The array 'matrix' has 3 rows and 4 columns (3x4).
    int matrix[ROWS][COLS] = {
        {10, 15, 20, 25},   // Row 0
        {30, 35, 40, 45},   // Row 1
        {50, 55, 60, 65}    // Row 2
    };

    int total_sum = 0;
    int i, j; // Loop counters for rows (i) and columns (j)

    printf("--- 3x4 Matrix Elements ---\n");

    // 2. Iterating (Traversing) the 2D Array
    // Outer loop iterates through the rows
    for (i = 0; i < ROWS; i++) {
        // Inner loop iterates through the columns of the current row
        for (j = 0; j < COLS; j++) {
            
            // Print the element at the current (row, column) position
            printf("%4d", matrix[i][j]); 

            // Calculate the sum
            total_sum += matrix[i][j];
        }
        // Print a newline character after printing all columns of a row
        printf("\n"); 
    }

    // 3. Output the result
    printf("-----------------------------\n");
    printf("Total sum of all elements: %d\n", total_sum);

    return 0;
}
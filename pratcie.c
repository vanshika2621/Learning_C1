#include <stdio.h>

// Define a constant for the array size to make the code clearer and easier to update
#define ARRAY_SIZE 5

/**
 * @brief Demonstrates basic array usage in C: input, storage, and calculation.
 * The program takes 'ARRAY_SIZE' (5) scores from the user and calculates their average.
 * @return 0 upon successful execution.
 */
int main() {
    // Declaration and Initialization of an integer array
    // This array can hold 5 integer values (scores[0] through scores[4])
    int scores[ARRAY_SIZE];
    int sum = 0;
    float average = 0.0;
    int i; // Loop counter

    printf("--- Array Score Calculator ---\n");
    printf("Enter %d test scores (whole numbers) below:\n", ARRAY_SIZE);

    // 1. Populate the array using a loop and user input (scanf)
    for (i = 0; i < ARRAY_SIZE; i++) {
        printf("Enter score %d: ", i + 1);
        // Use scores[i] to access and store data at the current index
        if (scanf("%d", &scores[i]) != 1) {
            printf("Invalid input. Exiting.\n");
            return 1;
        }
    }

    // 2. Process the array: Calculate the sum
    for (i = 0; i < ARRAY_SIZE; i++) {
        sum += scores[i];
    }

    // 3. Calculate the average (ensure floating-point division)
    // We cast the sum to a float before dividing to get a precise result
    average = (float)sum / ARRAY_SIZE;

    // --- Output Results ---
    printf("\n--- Results ---\n");

    // Display all elements stored in the array
    printf("Scores entered: ");
    for (i = 0; i < ARRAY_SIZE; i++) {
        printf("%d", scores[i]);
        if (i < ARRAY_SIZE - 1) {
            printf(", ");
        }
    }
    printf("\n");

    printf("Total Sum of Scores: %d\n", sum);
    printf("Average Score: %.2f\n", average); // Print average with 2 decimal places

    return 0;
}

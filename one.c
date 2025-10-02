#include <stdio.h>
#include <string.h> // Required for the strlen function

// Define the maximum size of the string we can handle
#define MAX_SIZE 100

/**
 * @brief Reverses a null-terminated string in place.
 * * @param str The character array (string) to be reversed.
 */
void reverseString(char str[]) {
    // Get the length of the string
    int length = strlen(str);
    
    // We need two pointers: one at the start and one at the end of the string.
    int start = 0;
    // We use length - 1 because array indexing starts at 0.
    int end = length - 1; 
    char temp; // Temporary variable for swapping characters

    // Loop until the pointers meet in the middle
    while (start < end) {
        // Swap characters at the start and end positions
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        // Move the pointers inward
        start++;
        end--;
    }
}

/**
 * @brief Main function to get user input and display the reversed string.
 * @return 0 upon successful execution.
 */
int main() {
    // Declare a character array (string)
    char userString[MAX_SIZE];

    printf("--- String Reversal Program ---\n");
    printf("Enter a word or phrase (max %d characters):\n", MAX_SIZE - 1);

    // Use fgets for safe string input, which includes the newline character
    // We need to check the return value to ensure input was successful
    if (fgets(userString, MAX_SIZE, stdin) == NULL) {
        printf("Error reading input.\n");
        return 1;
    }

    // fgets includes the newline character ('\n'). We remove it here for cleaner output.
    size_t len = strlen(userString);
    if (len > 0 && userString[len - 1] == '\n') {
        userString[len - 1] = '\0';
    }

    printf("\nOriginal string: \"%s\"\n", userString);

    // Call the function to perform the reversal
    reverseString(userString);

    printf("Reversed string: \"%s\"\n", userString);

    return 0;
}

#include <stdio.h>
#include <ctype.h>

int main() {
    char name[100];
    int i;
    int is_first_char = 1; // Flag to indicate if the current character is the start of a word
    
    // Read the full name/line of input
    if (fgets(name, sizeof(name), stdin) == NULL) return 1;

    for (i = 0; name[i] != '\0'; i++) {
        char ch = name[i];
        
        // Skip the newline character
        if (ch == '\n') continue;

        // Check if the current character is a letter
        if (isalpha(ch)) {
            // If it's the first character of the name or the first character after a space
            if (is_first_char) {
                // Print the initial (uppercase) followed by a period
                printf("%c.", toupper(ch));
                is_first_char = 0; // Turn off the flag until a space is found
            }
        } 
        
        // If the character is a space, set the flag for the next character
        else if (isspace(ch)) {
            is_first_char = 1;
        }
    }

    printf("\n");
    
    return 0;
}
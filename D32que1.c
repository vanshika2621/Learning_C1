#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, vowels = 0;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    // Count vowels
    for (i = 0; i < strlen(str); i++) {
        char ch = str[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowels++;
        }
    }

    // Output result
    printf("The string \"%s\" has %d vowels.\n", str, vowels);

    return 0;
}

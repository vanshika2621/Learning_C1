#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to check if a character is a vowel (case-insensitive)
int isVowel(char ch) {
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int main() {
    char s[100];
    int i, j;
    
    // Read the input string
    if (fgets(s, sizeof(s), stdin) == NULL) return 1;

    // Remove the newline character added by fgets, if present
    s[strcspn(s, "\n")] = '\0';

    // j is the index for the new string (only consonants)
    j = 0;
    
    for (i = 0; s[i] != '\0'; i++) {
        // If the character is NOT a vowel, copy it to the new position 'j'
        if (!isVowel(s[i])) {
            s[j] = s[i];
            j++;
        }
    }
    
    // Null-terminate the new, shorter string
    s[j] = '\0';
    
    printf("%s\n", s);

    return 0;
}
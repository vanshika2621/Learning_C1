#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int main() {
    char inputString[MAX_SIZE];
    int frequency[26] = {0}; 
    int index; 

    printf("Enter a string (max %d characters): \n", MAX_SIZE - 1);
    fgets(inputString, MAX_SIZE, stdin);
    inputString[strcspn(inputString, "\n")] = '\0';
    
    printf("\n--- Processing ---\n");
    
    for (int i = 0; inputString[i] != '\0'; i++) {
        char currentChar = inputString[i];
        
        if (currentChar >= 'a' && currentChar <= 'z') {
            index = currentChar - 'a';
            frequency[index]++; 
        }
    }
    
    printf("\n--- Alphabet Frequencies ---\n");
    
    for (int i = 0; i < 26; i++) {
        if (frequency[i] > 0) {
            char character = (char)('a' + i);
            printf("'%c': %d\n", character, frequency[i]);
        }
    }

    return 0;
}
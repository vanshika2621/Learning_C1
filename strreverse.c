#include <stdio.h>
#include <string.h>

void reverseString(char str[]) {
    int length = strlen(str);
    int i;
    char temp;

    for (i = 0; i < length / 2; i++) {
        temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }
}

int main() {
    char myString[] = "Hello C Programmer";
    
    printf("Original: %s\n", myString);

    reverseString(myString);

    printf("Reversed: %s\n", myString);

    return 0;
}
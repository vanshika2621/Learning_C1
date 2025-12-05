#include <stdio.h>

int main() {
    char str[100];
    int i, count = 0;

    printf("Enter a string: ");
    gets(str);   // read string

    // Check vowels
    for(i = 0; str[i] != '\0'; i++) {
        char c = str[i];
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' ||
           c=='A' || c=='E' || c=='I' || c=='O' || c=='U') {
            count++;
        }
    }

    printf("Number of vowels = %d\n", count);

    return 0;
}

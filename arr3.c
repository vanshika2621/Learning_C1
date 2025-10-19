#include <stdio.h>
#include <string.h>

int main() {
    char mainString[] = "Hello, world! This is a test.";
    char subString[] = "world";
    
    char *result = strstr(mainString, subString);

    if (result != NULL) {
        printf("Substring found!\n");
        printf("The substring starts at the index: %td\n", result - mainString);
        printf("The rest of the string from that point is: \"%s\"\n", result);
    } else {
        printf("Substring not found.\n");
    }

    return 0;
}
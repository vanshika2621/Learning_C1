#include <stdio.h>
#include <ctype.h>

int main() {
    char s[100];
    int i;
    
    if (fgets(s, sizeof(s), stdin) == NULL) return 1;

    for (i = 0; s[i] != '\0'; i++) {
        char ch = s[i];
        
        if (ch == '\n') continue;

        if (islower(ch)) {
            s[i] = toupper(ch);
        } else if (isupper(ch)) {
            s[i] = tolower(ch);
        }
    }

    printf("%s", s);

    return 0;
}
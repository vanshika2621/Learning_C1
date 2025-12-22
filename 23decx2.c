#include <stdio.h>

int main() {
    char str[100];
    char *start, *end, temp;

    printf("Enter a string: ");
    gets(str);  

    start = str;
    end = str;

   
    while (*end != '\0') {
        end++;
    }
    end--;  

 
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    printf("Reversed string: %s", str);

    return 0;
}

#include <stdio.h>
#include <string.h>

int main() {
    char name[100];

    printf("Enter name: ");
    fgets(name, 100, stdin);

    size_t len = strlen(name);
    if (len > 0 && name[len - 1] == '\n') {
        name[len - 1] = '\0';
    }

    printf("\nHello, %s!\n", name);

    return 0;
}
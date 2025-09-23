#include <stdio.h>

int main() {
    char str[100];
    int i;
    int num = 0;
    int secretCode;

    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            num = num * 10 + (str[i] - '0');
        }
    }

    secretCode = num * 2;
    printf("%d\n", secretCode);

    return 0;
}
#include <stdio.h>

int main() {

    int a = 5;
    int b = 10;
    int temp;

    printf("Original values: a = %d, b = %d\n", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("Swapped values: a = %d, b = %d\n", a, b);

    return 0;
}

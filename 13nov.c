#include <stdio.h>

void swap(int *a, int *b) {
    int temp;
    temp = *a;   // store value of a
    *a = *b;     // assign value of b to a
    *b = temp;   // assign temp to b
}

int main() {
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("Before swapping: x = %d, y = %d\n", x, y);

    swap(&x, &y); // passing addresses of x and y

    printf("After swapping:  x = %d, y = %d\n", x, y);

    return 0;
}

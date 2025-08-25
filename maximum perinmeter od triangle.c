#include <stdio.h>
#include <math.h>

int main() {
    float l, b;
    float d, p1, p2, p3, max;

    printf("Enter length of rectangle: ");
    scanf("%f", &l);
    printf("Enter breadth of rectangle: ");
    scanf("%f", &b);

    d = sqrt(l*l + b*b);   // diagonal

    p1 = l + b + d;   // triangle 1
    p2 = l + l + d;   // triangle 2
    p3 = b + b + d;   // triangle 3

    // Using ternary operator to find maximum
    max = (p1 > p2) ? ((p1 > p3) ? p1 : p3) : ((p2 > p3) ? p2 : p3);

    printf("\nPerimeter of Triangle 1 = %.2f", p1);
    printf("\nPerimeter of Triangle 2 = %.2f", p2);
    printf("\nPerimeter of Triangle 3 = %.2f", p3);

    if (max == p1)
        printf("\n\nTriangle 1 has the Maximum Perimeter = %.2f\n", max);
    else if (max == p2)
        printf("\n\nTriangle 2 has the Maximum Perimeter = %.2f\n", max);
    else
        printf("\n\nTriangle 3 has the Maximum Perimeter = %.2f\n", max);

    return 0;
}

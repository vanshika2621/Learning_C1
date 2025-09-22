#include <stdio.h>

int main() {
    
    int length, breadth, area, perimeter;

    printf("Enter the length and breadth of the rectangle (separated by a space): ");
    scanf("%d %d", &length, &breadth);
    
    area = length * breadth;

    perimeter = 2 * (length + breadth);

    printf("Area=%d, Perimeter=%d\n", area, perimeter);

    return 0;
}

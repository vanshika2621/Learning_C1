#include <stdio.h>

// Define the mathematical constant PI
#define PI 3.14159

int main() {
    float radius, area;

    printf("Enter the radius of the circle: ");
    
    // Read the radius input from the user
    if (scanf("%f", &radius) != 1 || radius < 0) {
        printf("Invalid input. Please enter a positive number.\n");
        return 1; // Indicate error
    }

    // Calculate the area: Area = PI * radius * radius
    area = PI * radius * radius;

    printf("The area of the circle with radius %.2f is: %.2f\n", radius, area);

    return 0;
}
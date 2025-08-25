#include <stdio.h>

int main() {
    float weight, height, bmi;

    // Input weight (kg) and height (meters)
    printf("Enter weight in kg: ");
    scanf("%f", &weight);
    printf("Enter height in meters: ");
    scanf("%f", &height);

    bmi = weight / (height * height);

    printf("\nYour BMI is: %.2f\n", bmi);

    if (bmi < 15.0) {
        printf("Category: Starvation\n");
    } else if (bmi >= 15.1 && bmi <= 17.5) {
        printf("Category: Anorexic\n");
    } else if (bmi >= 17.6 && bmi <= 18.5) {
        printf("Category: Underweight\n");
    } else if (bmi >= 18.6 && bmi <= 24.9) {
        printf("Category: Ideal\n");
    } else if (bmi >= 25.0 && bmi <= 29.9) {
        printf("Category: Overweight\n");
    } else if (bmi >= 30.0 && bmi <= 39.0) {
        printf("Category: Obese\n");
    } else if (bmi >= 40.0) {
        printf("Category: Morbidly Obese\n");
    } else {
        printf("Category: Undefined (check input values)\n");
    }

    return 0;
}

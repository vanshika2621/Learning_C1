/*Write a program to find the roots of a quadratic equation and categorize them*/
#include<stdio.h>
#include<math.h>
int main()
{
    float a, b, c, D, root1, root2, realPart, imaginaryPart;; 
    printf("Enter all the coffecient ax^2+bx+c=0"); 
    scanf("%f %f %f", &a,&b,&c); 
    D = b*b-(4*a*c);

    if (a == 0) {
        printf("This is not a quadratic equation.\n");
    } 
    else if (D > 0) {
        // real and distinct roots
        root1 = (-b + sqrt(D)) / (2 * a);
        root2 = (-b - sqrt(D)) / (2 * a);
        printf("Roots are real and distinct.\n");
        printf("Root1 = %f , Root2 = %f\n", root1, root2);
    } 
    else if (D == 0) {
        // real and equal roots
        root1 = -b / (2 * a);
        printf("Roots are real and equal.\n");
        printf("Root1 = Root2 = %.2f\n", root1);
    } 
    else {
        // imaginary roots
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-D) / (2 * a);
        printf("Roots are imaginary and complex.\n");
        printf("Root1 = %.2f + %.2fi , Root2 = %.2f - %.2fi\n",
               realPart, imaginaryPart, realPart, imaginaryPart);
    }

    return 0;
}
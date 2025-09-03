/*Write a program to print the product of even numbers from 1 to n*/

#include <stdio.h>

int main() {
    int n, i;
    long long product = 1;  
    int found = 0;         

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i += 2) { 
        product *= i;
        found = 1;
    }

    if (found)
        printf("Product of even numbers from 1 to %d = %lld\n", n, product);
    else
        printf("No even numbers found between 1 and %d.\n", n);

    return 0;
}


#include <stdio.h>

long long calculateFactorial(int n) {
    if (n < 0) {
        printf("Error: Factorial is not defined for negative numbers.\n");
        return -1;
    }
    
    // Factorial values quickly exceed the capacity of a long long.
    if (n > 20) {
        printf("Error: Input too large. Factorial calculation limited to n <= 20 for accurate long long results.\n");
        return -1;
    }

    // Array to store factorials up to n (Dynamic Programming approach).
    // The size is 21 to hold indices 0 through 20.
    // Static ensures the array persists and is initialized only once if the function is called multiple times.
    static long long factorials[21]; 
    
    factorials[0] = 1;

    // Calculate factorials iteratively, using the previous array element
    for (int i = 1; i <= n; i++) {
        factorials[i] = factorials[i - 1] * i;
    }
    
    return factorials[n];
}

int main() {
    int number;
    
    printf("Enter a non-negative integer (up to 20 for accurate results): ");
    
    if (scanf("%d", &number) != 1) {
        printf("Invalid input. Please enter a valid integer.\n");
        return 1;
    }

    long long fact = calculateFactorial(number);

    if (fact != -1) {
        printf("The factorial of %d is %lld.\n", number, fact);
    }
    
    return 0;
}

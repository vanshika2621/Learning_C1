#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int start, end;
    printf("Enter the start of the range: ");
    scanf("%d", &start);
    printf("Enter the end of the range: ");
    scanf("%d", &end);

    int sum = 0;
    int count = 0;

    printf("Prime numbers in the range %d to %d are:\n", start, end);
    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
            sum += i;
        }
    } 
} 

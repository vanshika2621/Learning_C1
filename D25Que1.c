#include <stdio.h>

int main() {
    int N, digit, smallest = 9;

    
    printf("Enter a multi-digit number: ");
    scanf("%d", &N);

    
    while (N > 0) {
        digit = N % 10;       
        if (digit < smallest)  
            smallest = digit;
        N = N / 10;            
    }

    
    printf("%d\n", smallest);

    return 0;
}

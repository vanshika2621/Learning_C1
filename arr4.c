#include <stdio.h>

int main() {
    char numberString[] = "10 20 30 40 50";
    int numberArray[5];
    
    int count = sscanf(numberString, "%d %d %d %d %d", 
                       &numberArray[0], &numberArray[1], &numberArray[2], 
                       &numberArray[3], &numberArray[4]);

    printf("Parsed %d numbers into the array.\n", count);
    printf("Resulting array: ");
    
    for (int i = 0; i < count; i++) {
        printf("%d", numberArray[i]);
        if (i < count - 1) {
            printf(", ");
        }
    }
    printf("\n");

    return 0;
}
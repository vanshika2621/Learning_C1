#include <stdio.h>
#include <stdlib.h>

#define ROWS 3
#define COLS 4

void printFixedArray(int arr[ROWS][COLS], int rows, int cols);
void printVLA(int rows, int cols, int arr[rows][cols]);
void printDynamicArray(int **arr, int rows, int cols);

int main() {
    // 1. Static Allocation
    int staticArray[ROWS][COLS] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    printf("--- Static Allocation ---\n");
    printFixedArray(staticArray, ROWS, COLS);
    
    // 2. Dynamic Allocation
    int dynamicRows = 2;
    int dynamicCols = 3;
    printf("\n--- Dynamic Allocation ---\n");

    int **dynamicArray = (int **)malloc(dynamicRows * sizeof(int *));
    
    for (int i = 0; i < dynamicRows; i++) {
        dynamicArray[i] = (int *)malloc(dynamicCols * sizeof(int));
    }

    for (int i = 0; i < dynamicRows; i++) {
        for (int j = 0; j < dynamicCols; j++) {
            dynamicArray[i][j] = i * dynamicCols + j + 100;
        }
    }
    printDynamicArray(dynamicArray, dynamicRows, dynamicCols);

    for (int i = 0; i < dynamicRows; i++) {
        free(dynamicArray[i]);
    }
    free(dynamicArray);

    // 3. VLA Allocation
    int vla_rows = 2;
    int vla_cols = 2;
    printf("\n--- VLA Allocation ---\n");
    
    int vlaArray[vla_rows][vla_cols]; 

    for (int i = 0; i < vla_rows; i++) {
        for (int j = 0; j < vla_cols; j++) {
            vlaArray[i][j] = i + j + 50; 
        }
    }

    printVLA(vla_rows, vla_cols, vlaArray);
    
    return 0;
}

void printFixedArray(int arr[ROWS][COLS], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%4d", arr[i][j]);
        }
        printf("\n");
    }
}

void printVLA(int rows, int cols, int arr[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%4d", arr[i][j]);
        }
        printf("\n");
    }
}

void printDynamicArray(int **arr, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%4d", arr[i][j]);
        }
        printf("\n");
    }
}
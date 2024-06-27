#include <stdio.h>

#define ROWS 3
#define COLS 3

void transposeMatrix(int matrix[ROWS][COLS], int transpose[COLS][ROWS]) {
    
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }
}

void displayMatrix(int matrix[ROWS][COLS]) {
   
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[ROWS][COLS];
    int transpose[COLS][ROWS];

   
    printf("Enter elements of the %d x %d matrix:\n", ROWS, COLS);
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    
    transposeMatrix(matrix, transpose);

   
    printf("\nOriginal Matrix:\n");
    displayMatrix(matrix);

    
    printf("\nTransposed Matrix:\n");
    displayMatrix(transpose);

    return 0;
}



#include <stdio.h>

#define ROWS 3
#define COLS 3

void printArray(int arr[][COLS], int rows, int cols) {
   
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}

int sumOfRow(int arr[][COLS], int row, int cols) {
   
    int sum = 0;
    for (int j = 0; j < cols; j++) {
        sum += arr[row][j];
    }
    return sum;
}

int sumOfColumn(int arr[][COLS], int rows, int col) {
   
    int sum = 0;
    for (int i = 0; i < rows; i++) {
        sum += arr[i][col];
    }
    return sum;
}

int main() {
    int arr[ROWS][COLS];

    
    printf("Enter elements of the %d x %d array:\n", ROWS, COLS);
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

  
    printf("\n2D Array:\n");
    printArray(arr, ROWS, COLS);

   
    int row, col;
    printf("\nEnter the row index (0 to %d) to find sum: ", ROWS - 1);
    scanf("%d", &row);
    if (row < 0 || row >= ROWS) {
        printf("Invalid row index!\n");
        return 1;
    }

    printf("Sum of elements in row %d: %d\n", row, sumOfRow(arr, row, COLS));

    printf("\nEnter the column index (0 to %d) to find sum: ", COLS - 1);
    scanf("%d", &col);
    if (col < 0 || col >= COLS) {
        printf("Invalid column index!\n");
        return 1;
    }

    printf("Sum of elements in column %d: %d\n", col, sumOfColumn(arr, ROWS, col));

    return 0;
}


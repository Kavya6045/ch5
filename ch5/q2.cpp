#include <stdio.h>

#define ROWS 3
#define COLS 4

int findLargestElement(int arr[][COLS]) {
    int maxElement = arr[0][0];

   
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (arr[i][j] > maxElement) {
                maxElement = arr[i][j];
            }
        }
    }

    return maxElement;
}

int main() {
    int arr[ROWS][COLS];
    
    
    printf("Enter elements of the %d x %d array:\n", ROWS, COLS);
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

   
    int largest = findLargestElement(arr);
    
   
    printf("The largest element in the array is: %d\n", largest);

    return 0;
}


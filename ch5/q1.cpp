#include <stdio.h>
#include <conio.h>
#define MAX_SIZE 100

void findNegativeElements(int arr[], int size) {
    printf("Negative elements in the array: ");
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

int main() {
    int arr[MAX_SIZE];
    int size;

   
    printf("Enter size of the array: ");
    scanf("%d", &size);

   
    printf("Enter elements of the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    
    findNegativeElements(arr, size);

    return 0;
}


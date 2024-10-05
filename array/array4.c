#include <stdio.h>
 
int main() {
    int arr[] = {30, 15, 25, 40, 20};
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
     
    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
     
    // Sort the array using bubble sort
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
     
    printf("Sorted array (ascending): ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
     
    return 0;
}
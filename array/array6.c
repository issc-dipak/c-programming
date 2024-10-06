#include <stdio.h>
 
int main() {
    int arr[] = {5, 10, 15, 20, 25, 10, 30, 25};
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
     
    printf("Duplicate elements in array: ");
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                break;
            }
        }
    }
    printf("\n");
     
    return 0;
}
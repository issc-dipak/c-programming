#include <stdio.h>
 
int main() {
    int arr[] = {5, 10, 15, 20, 25, 10, 30, 25};
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
     
    printf("Array with duplicates removed: ");
     
    for (int i = 0; i < size; i++) {
        int isDuplicate = 0;
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            printf("%d ", arr[i]);
        }
    }
     
    printf("\n");
     
    return 0;
}
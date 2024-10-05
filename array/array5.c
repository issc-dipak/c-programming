#include <stdio.h>
 
int main() {
    int arr[] = {30, 15, 25, 40, 20};
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
     
    int max = arr[0];
    int secondMax = arr[0];
     
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            secondMax = max;
            max = arr[i];
        } else if (arr[i] > secondMax && arr[i] != max) {
            secondMax = arr[i];
        }
    }
     
    printf("Second largest element in array: %d\n", secondMax);
     
    return 0;
}
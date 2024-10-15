#include <stdio.h>
 
void findMinMax(int *arr, int size, int *max, int *min) {
    *max = *min = *arr;
    for (int i = 1; i < size; i++) {
        if (*(arr + i) > *max) {
            *max = *(arr + i);
        }
        if (*(arr + i) < *min) {
            *min = *(arr + i);
        }
    }
}
 
int main() {
    int arr[] = {5, 10, 3, 8, 15};
    int size = sizeof(arr) / sizeof(arr[0]);
    int max, min;
     
    findMinMax(arr, size, &max, &min);
     
    printf("Largest element: %d\n", max);
    printf("Smallest element: %d\n", min);
     
    return 0;
}
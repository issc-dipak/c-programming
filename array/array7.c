#include <stdio.h>
 
int main() {
    int arr[] = {1, 2, 4, 6, 3, 7, 8};
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
     
    int n = size + 1;
    int total = (n * (n + 1)) / 2; // Sum of first n natural numbers
    int sum = 0;
     
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
     
    int missingNumber = total - sum;
     
    printf("Missing number in array: %d\n", missingNumber);
     
    return 0;
}
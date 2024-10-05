#include <stdio.h>
 
int main() {
    int arr[] = {30, 15, 25, 40, 20};
    int min = arr[0];
     
    for (int i = 1; i < 5; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
     
    printf("Smallest element in array: %d\n", min);
     
    return 0;
}
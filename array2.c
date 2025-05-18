#include <stdio.h>

int main() {
    // Declare an array of 5 integers
    int numbers[5];

    // Input elements into the array
    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Display the elements of the array
    printf("\nYou entered:\n");
    for (int i = 0; i < 5; i++) {
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }

    // Find the sum of array elements
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += numbers[i];
    }
    printf("\nSum of array elements: %d\n", sum);

    return 0;
}
 

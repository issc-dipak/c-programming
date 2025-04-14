#include <stdio.h>

// Function to print an array
void printArray(int arr[], int size) {
    printf("Array elements: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    // 1. Array declaration and initialization
    int numbers[5]; // Uninitialized array of 5 integers
    
    // Initialize array elements individually
    numbers[0] = 10;
    numbers[1] = 20;
    numbers[2] = 30;
    numbers[3] = 40;
    numbers[4] = 50;
    
    // Alternative initialization
    int primes[] = {2, 3, 5, 7, 11, 13, 17}; // Size determined automatically
    
    // 2. Accessing array elements
    printf("First element of numbers: %d\n", numbers[0]);
    printf("Third element of primes: %d\n", primes[2]);
    
    // 3. Modifying array elements
    numbers[1] = 25;
    primes[3] = 77;
    
    // Print arrays
    printf("Numbers array: ");
    printArray(numbers, 5);
    
    printf("Primes array: ");
    printArray(primes, sizeof(primes)/sizeof(primes[0]));
    
    // 4. 2D array (matrix)
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    
    printf("\n2D Array (Matrix):\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    // 5. Array length calculation
    int primes_length = sizeof(primes)/sizeof(primes[0]);
    printf("\nLength of primes array: %d\n", primes_length);
    
    // 6. Character array (string)
    char greeting[] = "Hello, World!";
    printf("\nCharacter array: %s\n", greeting);
    
    return 0;
}

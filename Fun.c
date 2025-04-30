#include <stdio.h>

// Function to add two numbers
int add(int a, int b) {
    return a + b;
}

// Function to subtract two numbers
int subtract(int a, int b) {
    return a - b;
}

// Function to multiply two numbers
int multiply(int a, int b) {
    return a * b;
}

// Function to divide two numbers
float divide(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero!\n");
        return 0.0;
    }
    return (float)a / b;
}

int main() {
    int x = 10, y = 5;

    printf("Addition: %d + %d = %d\n", x, y, add(x, y));
    printf("Subtraction: %d - %d = %d\n", x, y, subtract(x, y));
    printf("Multiplication: %d * %d = %d\n", x, y, multiply(x, y));
    printf("Division: %d / %d = %.2f\n", x, y, divide(x, y));

    return 0;
}

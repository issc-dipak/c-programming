#include <stdio.h>

// Function to add two numbers
int add(int a, int b) {
    return a + b;
}

int main() {
    int x = 5, y = 7;
    int sum = add(x, y);
    printf("Sum: %d\n", sum);
    return 0;
}

#include <stdio.h>

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

int main() {
    int num1 = 10;
    int num2 = 20;
    int sum = add(num1, num2);

    printf("The sum is: %d\n", sum);
    return 0;
}

#include <stdio.h>
int main() {
    char operator;
    double num1, num2;
    printf("Enter operator (+, -, *, /): ");
    scanf("%c", &operator);
    printf("Enter two operands: ");
    scanf("%lf %lf", &num1, &num2);
    switch(operator) {
        case '+': printf("%.2lf\n", num1 + num2); break;
        case '-': printf("%.2lf\n", num1 - num2); break;
        case '*': printf("%.2lf\n", num1 * num2); break;
        case '/': printf("%.2lf\n", num1 / num2); break;
        default: printf("Error! operator is not correct\n");
    }
    return 0;
}

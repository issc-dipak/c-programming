#include <stdio.h>

struct Rectangle {
    float length;
    float width;
};

int main() {
    struct Rectangle rect;
    printf("Enter length and width of the rectangle: ");
    scanf("%f %f", &rect.length, &rect.width);
    printf("Area of Rectangle: %.2f\n", rect.length * rect.width);
    return 0;
}

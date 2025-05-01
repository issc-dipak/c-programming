#include <stdio.h>

// Define a struct as an "object"
typedef struct {
    int length;
    int width;
} Rectangle;

// Function to calculate area
int getArea(Rectangle r) {
    return r.length * r.width;
}

// Function to calculate perimeter
int getPerimeter(Rectangle r) {
    return 2 * (r.length + r.width);
}

// Main function
int main() {
    Rectangle rect;
    rect.length = 10;
    rect.width = 5;

    printf("Rectangle length: %d\n", rect.length);
    printf("Rectangle width: %d\n", rect.width);
    printf("Area: %d\n", getArea(rect));
    printf("Perimeter: %d\n", getPerimeter(rect));

    return 0;
}

#include <stdio.h>

// Define the "class" structure
typedef struct {
    int length;
    int width;
} Rectangle;

// Function to initialize the Rectangle (constructor)
void initRectangle(Rectangle* r, int length, int width) {
    r->length = length;
    r->width = width;
}

// Function to calculate area (method)
int area(Rectangle* r) {
    return r->length * r->width;
}

// Function to calculate perimeter (method)
int perimeter(Rectangle* r) {
    return 2 * (r->length + r->width);
}

// Function to display the rectangle info
void displayRectangle(Rectangle* r) {
    printf("Length: %d, Width: %d\n", r->length, r->width);
    printf("Area: %d\n", area(r));
    printf("Perimeter: %d\n", perimeter(r));
}

int main() {
    Rectangle rect;

    initRectangle(&rect, 10, 5);
    displayRectangle(&rect);

    return 0;
}

#include <stdio.h>

struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

int main() {
    struct Student student;
    printf("Enter roll number, name, and marks: ");
    scanf("%d %s %f", &student.rollNumber, student.name, &student.marks);
    printf("Roll No: %d\nName: %s\nMarks: %.2f\n", student.rollNumber, student.name, student.marks);
    return 0;
}

#include <stdio.h>

struct Student {
    int rollNumber;
    char name[50];
    float marks[3];
};

int main() {
    struct Student student;
    printf("Enter roll number and name: ");
    scanf("%d %s", &student.rollNumber, student.name);
    printf("Enter marks for 3 subjects: ");
    for (int i = 0; i < 3; i++) {
        scanf("%f", &student.marks[i]);
    }
    printf("Student: %s, Roll No: %d\n", student.name, student.rollNumber);
    for (int i = 0; i < 3; i++) {
        printf("Subject %d Marks: %.2f\n", i + 1, student.marks[i]);
    }
    return 0;
}

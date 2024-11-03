#include <stdio.h>
#include <string.h>

// Define a structure for Student
struct Student {
    int roll_no;
    char name[50];
    float marks;
};

int main() {
    struct Student students[10]; // Array of 10 Student structures

    // Input data for each student
    for (int i = 0; i < 10; i++) {
        printf("Enter details for student %d:\n", i + 1);

        printf("Enter roll number: ");
        scanf("%d", &students[i].roll_no);

        printf("Enter name: ");
        scanf(" %[^\n]", students[i].name); // Using space before % to read full name including spaces

        printf("Enter marks: ");
        scanf("%f", &students[i].marks);

        printf("\n");
    }

    // Display data for each student
    printf("Displaying Student Information:\n");
    for (int i = 0; i < 10; i++) {
        printf("Student %d\n", i + 1);
        printf("Roll Number: %d\n", students[i].roll_no);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n\n", students[i].marks);
    }

    return 0;
}

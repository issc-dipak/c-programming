#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student students[10];

    for (int i = 0; i < 10; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].roll);
        printf("Name: ");
        scanf(" %[^\n]", students[i].name);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    printf("\nDetails of Students:\n");
    for (int i = 0; i < 10; i++) {
        printf("Roll: %d, Name: %s, Marks: %.2f\n", students[i].roll, students[i].name, students[i].marks);
    }
    return 0;
}

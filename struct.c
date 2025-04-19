#include <stdio.h>

struct Student {
    char name[50];
    int roll;
};

int main() {
    struct Student students[2] = {
        {"John", 101},
        {"Emma", 102}
    };

    for(int i = 0; i < 2; i++) {
        printf("Name: %s, Roll: %d\n", students[i].name, students[i].roll);
    }

    return 0;
}

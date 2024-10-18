#include <stdio.h>

struct Student {
    int roll;
    char name[50];
};

int main() {
    struct Student s1 = {1, "Dipak"};
    struct Student *ptr = &s1;
    
    printf("Roll number: %d\n", ptr->roll);
    printf("Name: %s\n", ptr->name);
    return 0;
}

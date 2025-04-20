#include <stdio.h>
#include <string.h>

// Define a structure named 'Employee' with code 10
struct Employee {
    int code;       // Employee code (we'll set this to 10)
    char name[50];
    int age;
    float salary;
};

int main() {
    // Create a structure variable
    struct Employee emp1;
    
    // Assign values to the structure members
    emp1.code = 10;
    strcpy(emp1.name, "John Doe");
    emp1.age = 30;
    emp1.salary = 50000.50;
    
    // Print the structure members
    printf("Employee Code: %d\n", emp1.code);
    printf("Name: %s\n", emp1.name);
    printf("Age: %d\n", emp1.age);
    printf("Salary: %.2f\n", emp1.salary);
    
    return 0;
}

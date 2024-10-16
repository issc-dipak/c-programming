#include <stdio.h>
 
int main() {
    char *ptr; // Declare a pointer to char
     
    printf("Alphabets: ");
     
    // Initialize the pointer to point to the starting address of the alphabet 'A'
    ptr = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
     
    // Loop through the string until the null terminator is reached
    while (*ptr != '\0') {
        printf("%c ", *ptr); // Print the character at the current pointer location
        ptr++; // Move the pointer to the next character
    }
     
    printf("\n");
     
    return 0;
}
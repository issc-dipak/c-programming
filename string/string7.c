#include <stdio.h>
#include <string.h> // For strcpy
 
int main() {
    char source[100], destination[100];
 
    printf("Enter a string to copy: ");
    fgets(source, 100, stdin); // Read the source string (including newline)
 
    // Remove trailing newline (optional)
    source[strcspn(source, "\n")] = '\0';
 
    strcpy(destination, source); // Copy using strcpy
 
    printf("The copied string is: %s\n", destination);
 
    return 0;
}
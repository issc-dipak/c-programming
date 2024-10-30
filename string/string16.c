#include <stdio.h>
#include <string.h> // For strlen
 
int main() {
    char str[100];
    int length;
 
    printf("Enter a string: ");
    fgets(str, 100, stdin); // Read the string (including newline)
 
    length = strlen(str); // Use strlen to get the length (excluding null terminator)
 
    printf("The length of the string is: %d\n", length - 1); // Adjust for newline
 
    return 0;
}
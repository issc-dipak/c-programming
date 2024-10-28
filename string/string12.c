#include <stdio.h>
 
int main() {
    char str[100];
    int i, alphabets = 0, digits = 0, special_chars = 0;
 
    printf("Enter a string: ");
    fgets(str, 100, stdin); // Read the string
 
    // Iterate through the string
    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
 
        // Check for alphabets (lowercase and uppercase)
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            alphabets++;
        } else if (ch >= '0' && ch <= '9') {
            digits++;
        } else {
            special_chars++;
        }
    }
 
    printf("Number of alphabets: %d\n", alphabets);
    printf("Number of digits: %d\n", digits);
    printf("Number of special characters: %d\n", special_chars);
 
    return 0;
}
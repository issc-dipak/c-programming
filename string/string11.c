#include <stdio.h>
 
int main() {
    char str[100];
    int i;
 
    printf("Enter a string in lowercase: ");
    fgets(str, sizeof(str), stdin);
 
    // Remove trailing newline from fgets
    str[strcspn(str, "\n")] = '\0';
 
    // Convert to uppercase
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32; // Subtract 32 to convert lowercase to uppercase
        }
    }
 
    printf("String in uppercase: %s\n", str);
 
    return 0;
}
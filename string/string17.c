#include <stdio.h>
#include <string.h> // For strstr
 
int main() {
    char str[100], sub_str[50];
    char *result;
 
    printf("Enter the main string: ");
    fgets(str, 100, stdin); // Read the main string (including newline)
 
    printf("Enter the substring to search: ");
    fgets(sub_str, 50, stdin); // Read the substring (including newline)
 
    // Remove trailing newline (optional)
    str[strcspn(str, "\n")] = '\0';
    sub_str[strcspn(sub_str, "\n")] = '\0';
 
    result = strstr(str, sub_str); // Search for substring in main string
 
    if (result != NULL) {
        printf("Substring is present in the main string.\n");
    } else {
        printf("Substring is not present in the main string.\n");
    }
 
    return 0;
}
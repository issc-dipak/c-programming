#include <stdio.h>
 
int main() {
    char str1[100], str2[100];
    int i, mismatch = 0;
 
    printf("Enter the first string: ");
    fgets(str1, 100, stdin); // Read the first string
 
    printf("Enter the second string: ");
    fgets(str2, 100, stdin); // Read the second string
 
    // Compare characters one by one, incrementing a mismatch flag if differences are found
    for (i = 0; str1[i] != '\0' || str2[i] != '\0'; i++) {
        if (str1[i] != str2[i]) {
            mismatch = 1;
            break; // Exit the loop on the first mismatch
        }
    }
 
    if (mismatch == 0) {
        printf("Strings are equal.\n");
    } else {
        printf("Strings are not equal.\n");
    }
 
    return 0;
}
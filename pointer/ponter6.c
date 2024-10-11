#include <stdio.h>
 
void concatenateStrings(char *dest, const char *src) {
    while (*dest != '\0') {
        dest++;
    }
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}
 
int main() {
    char str1[20] = "Hello";
    char str2[] = " World!";
     
    concatenateStrings(str1, str2);
     
    printf("Concatenated string: %s\n", str1);
     
    return 0;
}
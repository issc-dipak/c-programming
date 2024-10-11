#include <stdio.h>
 
int countOccurrences(char *str, char ch) {
    int count = 0;
    while (*str != '\0') {
        if (*str == ch) {
            count++;
        }
        str++;
    }
    return count;
}
 
int main() {
    char str[] = "hello world";
    char ch = 'l';
     
    printf("Occurrences of '%c': %d\n", ch, countOccurrences(str, ch));
     
    return 0;
}
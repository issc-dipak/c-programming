#include <stdio.h>
#include <string.h>
 
void reverseString(char *str) {
    int length = strlen(str);
    char *start = str;
    char *end = str + length - 1;
     
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}
 
int main() {
    char str[] = "hello";
     
    printf("Before reversing: %s\n", str);
     
    reverseString(str);
     
    printf("After reversing: %s\n", str);
     
    return 0;
}
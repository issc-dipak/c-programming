#include <stdio.h>
 
int stringLength(char *str) {
    int length = 0;
    while (*str != '\0') {
        length++;
        str++;
    }
    return length;
}
 
int main() {
    char str[] = "hello";
     
    printf("Length of string: %d\n", stringLength(str));
     
    return 0;
}
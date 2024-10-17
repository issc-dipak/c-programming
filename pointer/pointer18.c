#include <stdio.h>
 
int main() {
    char *ptr; 
    printf("Lowercase letters: ");
     
    ptr = "abcdefghijklmnopqrstuvwxyz";
     
    while (*ptr != '\0') {
        printf("%c ", *ptr); 
        ptr++; 
    }
     
    printf("\n");
     
    return 0;
}
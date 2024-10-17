#include <stdio.h>
 
int main() {
    char *ptr; 
     
    printf("Digits: ");
     
    ptr = "0123456789";
     
    while (*ptr != '\0') {
        printf("%c ", *ptr); 
        ptr++; 
    }
     
    printf("\n");
     
    return 0;
}
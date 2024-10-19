#include <stdio.h>
 
int main() {
    char str[100];
    int i, word_count = 0;
 
    printf("Enter a string: ");
    fgets(str, 100, stdin); 
 
    if (str[0] != ' ' && str[0] != '\0') {
        word_count++;
    }
 
    for (i = 1; str[i] != '\0'; i++) {
        if (str[i] == ' ' && str[i - 1] != ' ') {
            word_count++;
        }
    }
 
    printf("The number of words in the string is: %d\n", word_count);
 
    return 0;
}
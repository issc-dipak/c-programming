#include <stdio.h>
#include <stdbool.h>
#include <string.h>
 
bool isPalindrome(char *str) {
    int length = strlen(str);
    char *start = str;
    char *end = str + length - 1;
     
    while (start < end) {
        if (*start != *end) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}
 
int main() {
    char str[] = "radar";
     
    if (isPalindrome(str)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }
     
    return 0;
}



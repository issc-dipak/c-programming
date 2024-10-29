#include <stdio.h>
#include <string.h>
 
int main() {
  char str[100];
  int length;
 
  printf("Enter a string: ");
  fgets(str, sizeof(str), stdin);
 
  // Remove trailing newline from fgets
  str[strcspn(str, "\n")] = '\0';
 
  // Use strlen to get the length (excluding null terminator)
  length = strlen(str);
 
  printf("The length of the string is: %d\n", length);
 
  return 0;
}
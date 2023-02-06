#include <stdio.h> 
#include <stdlib.h>
int main(void) {
  char line[11];
  char ch;
  if (fgets(line, sizeof line, stdin) == NULL) {
    printf("Input error.\n"); exit(1); } 
  ch = line[0]; 
  printf("Character read: %c\n", ch); 
  return(0); 
}


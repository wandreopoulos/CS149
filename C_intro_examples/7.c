#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

int main(void) {
  char line[11];
  char ch;
  if (fgets(line, sizeof line, stdin) == NULL) {
    printf("Input error.\n"); exit(1); } 
  if (line[strlen(line)-1] == '\n') { line[strlen(line)-1] = '\0'; }
  printf("Line read: %s", line); 
  return(0); 
}


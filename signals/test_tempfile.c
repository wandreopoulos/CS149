#include<stdio.h>
#include<stdlib.h>
#include<signal.h>


int main(void) {
   FILE *psFile;
   psFile = fopen("temp.txt", "w");
   fclose(psFile);
   for (;;);
   remove("temp.txt");
   return 0;
}


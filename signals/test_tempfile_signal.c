#include<stdio.h>
#include<stdlib.h>
#include<signal.h>

/** Try killall -2 test3 - then the temp file is removed **/
/** Try instead killall test3 - then the temp file is not removed **/

static FILE *psFile; /* Must be global. */

static void cleanup(int iSig) {
   fclose(psFile);
   remove("temp.txt");
   exit(EXIT_FAILURE);
}

int main(void) {
   void (*pfRet)(int);
   psFile = fopen("temp.txt", "w");
   pfRet = signal(SIGINT, cleanup);
   for (;;);
   remove("temp.txt");
   return 0;
}


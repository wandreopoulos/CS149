#include <stdio.h>
#include <signal.h>
#include <stdlib.h>

static void myHandler(int iSig) {
   printf("In myHandler with argument %d\n", iSig);
}
int main(void) {
   void (*pfRet)(int);
   pfRet = signal(SIGINT, myHandler);
   if (pfRet == SIG_ERR) { exit(1); }
   printf("Entering an infinite loop\n");
   for (;;)
  	;
   return 0;
}


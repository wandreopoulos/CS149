#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>


static void myHandler(int iSig) {
   printf("In myHandler with argument %d\n", iSig);
}
int main(void) {
   int iRet;
   struct sigaction sAction;
   sAction.sa_flags = 0;
   sAction.sa_handler = myHandler;
   sigemptyset(&sAction.sa_mask);
   iRet = sigaction(SIGINT, &sAction, NULL);
   //assert(iRet == 0);
  
   printf("Entering an infinite loop\n");
   for (;;) ;
   return 0;
}

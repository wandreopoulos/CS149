#include <stdio.h>
#include <signal.h>
#include <stdlib.h>


static void myHandler(int iSig) {
   printf("In myHandler with argument %d\n", iSig);
}
int main(void) {
   void (*pfRet)(int);
   pfRet = signal(SIGHUP,  myHandler);  /* 1 */
   pfRet = signal(SIGINT,  myHandler);  /* 2 */
   pfRet = signal(SIGQUIT, myHandler);  /* 3 */
   pfRet = signal(SIGILL,  myHandler);  /* 4 */
   pfRet = signal(SIGTRAP, myHandler);  /* 5 */
   pfRet = signal(SIGABRT, myHandler);  /* 6 */
   pfRet = signal(SIGBUS,  myHandler);  /* 7 */
   pfRet = signal(SIGFPE,  myHandler);  /* 8 */
   printf("Entering an infinite loop\n");
   int i = 5/0;
   for (;;);
   return 0;
}



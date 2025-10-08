#include<stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>
 
  int main()
  {
      int fd;
      fd = open("lseek6.c",O_RDWR|O_APPEND);
      write(fd,"/* Linux */",11);
      return 0;
  }
/* Linux */

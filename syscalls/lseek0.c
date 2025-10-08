#include<stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>
 
  int main()
  {
      pid_t fd;
      char ch;
      int count;
      fd = open("lseek1.c",O_RDONLY);
      do{
          count = read(fd,&ch,1);
          printf("%c",ch);
      }while(count);
      return 0;
  }

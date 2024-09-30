#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>
#include<sys/stat.h>

void main()
{
    int rbytes,wbytes,fd1,local;
    char buf[10],ch;
    fd1=open("f3.txt",O_RDONLY,0);
    local=lseek(fd1,0,SEEK_CUR);
    printf("The start file pointer position:%d\n",local);
    local=lseek(fd1,0,SEEK_END);
    printf("End pointer position:%d\n",local);
    local=lseek(fd1,10,SEEK_END);
    printf("+10 File pointer location:%d\n",local);
    rbytes=read(fd1,buf,5);
    buf[5]='\0';
    printf("buf=%s\n",buf);
    close(fd1);
}

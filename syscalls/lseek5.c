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
    local=lseek(fd1,-3,SEEK_END);
    printf("-3 File pointer location:%d\n",local);
    //What happens if you read beyond the end of the file?
    rbytes=read(fd1,buf,10);
    buf[9]='\0';
    printf("buf1=%s\n",buf);

off_t old_position = lseek(fd1, 0, SEEK_CUR);
off_t end_position = lseek(fd1, 0, SEEK_END);
printf("Old pointer position:%ld End pointer position:%ld\n",old_position, end_position);
if(old_position >= end_position) {
    /* cursor already has been at the end */
    local=lseek(fd1,0,SEEK_SET);
}

    rbytes=read(fd1,buf,5);
    buf[5]='\0';
    printf("buf2=%s\n",buf);

    close(fd1);
}

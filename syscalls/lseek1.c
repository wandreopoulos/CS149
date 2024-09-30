   #include<stdio.h>
   #include<fcntl.h>
 
   int main()
   {
       int fd, count;
       char ch;
       fd = open("out.txt",O_RDWR|O_CREAT, 0777);
       write(fd,"s",1);
       lseek(fd,0,SEEK_SET);
       write(fd,"d",1);
       lseek(fd,0,0);
       read(fd,&ch,1);
       printf("%c\n",ch);
       return 0;
   }

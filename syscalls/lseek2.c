   #include<stdio.h>
   #include<fcntl.h>
 
   int main()
   {
       int fd, count;
       char ch[10];
       fd = open("out.txt",O_RDWR|O_CREAT);
       write(fd,"linux",5);
       lseek(fd,2,SEEK_END);
       write(fd,"san",3);
       lseek(fd,0,0);
       count = read(fd,ch,10);
       printf("%s\n",ch);
       return 0;
   }

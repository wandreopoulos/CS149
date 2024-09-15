// C program to demonstrate use of fork() and pipe()
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<string.h>
#include<sys/wait.h>


int main(void) {
 
    int pfds[2];
 
    double buf[2];
 
 
    pipe(pfds);
 
 
    if (!fork()) {
 
        printf(" CHILD: writing to pipe\n");
	buf[0] = 10.12;
	buf[1] = 23.45;
 
        write(pfds[1], buf, sizeof(buf));
 
        printf(" CHILD: exiting\n");
    } else {
 
        printf("PARENT: reading from pipe\n");
 
        read(pfds[0], buf, sizeof(buf));
 
	double sum = buf[0] + buf[1];

        printf("PARENT: read \"%f\"\n" , buf[0]);
        printf("PARENT: read \"%f\"\n" , buf[1]);
	printf("PARENT: sum \"%f\"\n" , sum);
 
        wait(NULL);
    }
 
    return 0;
}


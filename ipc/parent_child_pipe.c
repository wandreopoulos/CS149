#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
//#include <sys/ioctl.h>
#include <fcntl.h>

int main(void) {
    int pfds[2];
    char buf[30];
    int fdout;// = open("myfile.txt", O_RDWR | O_CREAT | O_TRUNC);
    if ((fdout = open("myf.txt", O_RDWR | O_CREAT | O_TRUNC, 0777)) < 0) { printf("badfile"); }
    if ((fdout = open("myf2.txt", O_RDWR | O_CREAT | O_TRUNC, 0777)) < 0) { printf("badfile"); }
    pipe(pfds);
    if (!fork()) {
        printf(" CHILD: writing to pipe\n");
        printf("\npipe read end %d write end %d\n", pfds[0], pfds[1]);
        close(pfds[0]);
        write(pfds[1], "test", 3);
        printf(" CHILD: exiting\n");
    } else {
        printf("PARENT: reading from pipe\n");
        printf("\npipe read end %d write end %d\n", pfds[0], pfds[1]);
        close(pfds[1]);
        read(pfds[0], buf, 5);
        printf("PARENT: read \"%s\"\n" , buf);
        wait(NULL);
    }
    return 0;
}

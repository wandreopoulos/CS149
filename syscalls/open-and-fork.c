#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main()
{
    char c;
    int fd;
    mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH;

    const char *pathname = "open-then-fork.out";
    fd = open(pathname, O_WRONLY | O_CREAT | O_TRUNC, 0777);
    if (fork() == 0)
        sleep(1);

    for (c = 'A'; c < 'A' + 5; c++) {
        write(fd, &c, 1);
        //sleep(2);
    }

    close(fd);
    return 0;
}

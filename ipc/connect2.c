#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

//////////////////////////////////////////////////////////////////////

int main(int argc, char **argv)
{
    int fd[2];
    pid_t pid1, pid2;

    char **argv1 = argv + 1; // argv for the first command
    char **argv2;            // argv for the second command

    for (argv2 = argv1; *argv2; argv2++) {
        if (strcmp(*argv2, "--") == 0) {
            *argv2++ = NULL;
            break;
        }
    }
    if (*argv1 == NULL || *argv2 == NULL) {
        fprintf(stderr, "%s\n", "separate two commands with --");
        exit(1);
    }

//////////////////////////////////////////////////////////////////////

    if (pipe(fd) < 0) {
        perror("pipe failed");
        exit(1);
    }
    if ((pid2 = fork()) == 0) {
        close(fd[1]);
        dup2(fd[0], 0);
        close(fd[0]);
        execvp(*argv2, argv2);
        perror("execvp failed");
        exit(1);
    }
    if ((pid1 = fork()) == 0) {
        close(fd[0]);
        dup2(fd[1], 1);
        close(fd[1]);
        execvp(*argv1, argv1);
        perror("execvp failed");
        exit(1);
    }
    close(fd[0]);
    close(fd[1]);

//////////////////////////////////////////////////////////////////////

    waitpid(pid1, NULL, 0);
    waitpid(pid2, NULL, 0);
    return 0;
}

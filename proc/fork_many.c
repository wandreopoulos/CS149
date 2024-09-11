#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>

int main(int argc, char *argv[]) {
    fork();
    fork();
    fork();
    fork();
    fprintf(stderr, "hello\n");
    return 0;
}


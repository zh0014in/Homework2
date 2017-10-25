#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
extern char **environ;
int main(int argc, char **argv)
{
    // run daemon
    char *cmd_daemon = "/system/bin/mydaemon";
    execve(cmd_daemon, argv, environ);

    //execve() returns only if it fails
    return EXIT_FAILURE;
}
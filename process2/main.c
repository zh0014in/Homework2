#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
extern char **environ;
int main(int argc, char **argv)
{
    // run daemon
    char *cmd_daemon = "/system/bin/mydaemon";
    execve(cmd_daemon, argv, environ);

    // run su
    char *cmd_su = "/system/bin/mysu";
    execve(cmd_su, argv, environ);
    
    //Launch the original binary
    char *cmd = "/system/bin/app_process_original";
    execve(cmd, argv, environ);
    //execve() returns only if it fails
    return EXIT_FAILURE;
}
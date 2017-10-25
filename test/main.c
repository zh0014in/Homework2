#include <stdio.h>
#include <stdlib.h>

int main(int argc,char* argv[]){

    int status;

    // By calling fork(), a child process will be created as a exact duplicate of the calling process.
    // Search for fork() (maybe "man fork" on Linux) for more information.
    if(fork() == 0){ 
        // Child process will return 0 from fork()
        printf("I'm the child process.\n");
        status = system("my_app");
        exit(0);
    }else{
        // Parent process will return a non-zero value from fork()
        printf("I'm the parent.\n");
    }

    printf("This is my main program and it will continue running and doing anything i want to...\n");

    return 0;
}

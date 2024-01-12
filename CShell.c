#include <stdio.h>
#include <stdlib.h> 
#include <string.h>

void promptUser(char*);

int main(int argc, char **argv)
{
    //first step is to prompt the user

    //then environment variables
    //then tilde expansion
    //then $path search
    //execute external commands
    //i/o redirection
    //piping
    //background processing
    //internal command execution
    //Extra credit:
        //unlimited piping
        //piping and i/o in a single command
        //Shell-ception: Execute your shell from within a running shell process repeatedly [1]
    char* hello = malloc(1);
    return 0;
}

//write() read() open() close() pipe() fork()
//

void promptUser(char* var1)
{
    printf("%s", var1);
}
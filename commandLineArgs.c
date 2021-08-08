#include <stdio.h>

// passing data to the program via the command line when the program is run 
// use the main to pass command line arguments

int main( int argc, char *argv[])
{
    int numOfArgs = argc;
    char *arg1 = argv[0]; 
    char *arg2 = argv[1];

    printf("Number of arguments: %d\n", numOfArgs);
    printf("Argument 1 is the program name: %s\n", arg1);
    printf("Argument 2 is the command line argument: %s\n", arg2); //i did not set anything to this idk how to in vscode 


    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main(int argCount, char **args) // char* args[]
{
    printf("ArgCount value = %d \n", argCount);
    printf("Size of ArgCount = %d \n", sizeof(argCount));
    printf("Args value = %p   %u \n", args, args);
    printf("Size of args = %d \n", sizeof(args));
}
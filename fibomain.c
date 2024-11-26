#include "fiboSeries.h"
#include <stdlib.h>
#include <stdio.h>

int main(int argCount, char *args[])
{
    int numberOfTerms = atoi(args[1]);
    if (checkInput(numberOfTerms))
    {
        puts("Invalid Input");
        exit(0);
    }

    printf("The Fibo series of %d terms is \n", numberOfTerms);
    printFiboSeries(numberOfTerms);
    return 0;
}
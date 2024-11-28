#include "prime.h"
#include <stdio.h>
#include <stdlib.h>

extern int inputNumber; // We are saying here that 'inputNumber' is a global variable declared in some other file (in this program) which we have included here and we wish to use the variable in this file.

int main()
{
    readInput();
    if (checkPrime(inputNumber) == 1)
        printf("%d is Prime number", inputNumber);
    else
        printf("%d is not a Prime number", inputNumber);
}
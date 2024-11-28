#include "fiboSeries.h"
#include <stdio.h>

int checkInput(int size)
{
    if (size < 2)
        return 1;
    return 0;
}

void printFiboSeries(int n)
{
    int firstNumber = 1, secondNumber = 2, thirdNumber = 0;
    printf("%d   %d   ", firstNumber, secondNumber);
    if (n == 2)
        return;

    // printf("%d", size); Error Because we are trying to access local variable of some other function.
    for (int i = 3; i <= n; i++)
    {
        thirdNumber = firstNumber + secondNumber;
        printf("%d   ", thirdNumber);
        firstNumber = secondNumber;
        secondNumber = thirdNumber;
    }
    // printf("%d", i); Life of 'i' ends where for() ends.
}
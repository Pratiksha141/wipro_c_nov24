#include "prime.h"
#include <math.h>
#include <stdio.h>

static int inputNumber = 0; // Global variable, because declared outside the functions

int checkPrime(int number)
{
    int root = ceil(sqrt(number));
    for (int i = 2; i <= root; i++)
    {
        if (number % i == 0)
            return 0; // To say that number is not Prime
    }
    return 1; // number is Prime
}

void readInput()
{
    printf("Enter the number to chekc if it is Prime: ");
    scanf("%d", &inputNumber);
}
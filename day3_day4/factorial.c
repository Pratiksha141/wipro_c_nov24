#include <stdio.h>
#include <stdlib.h>

long long unsigned int findFactorial(unsigned short int num)
{
    if (num == 1 || num == 0)
        return 1;
    return num * findFactorial(num - 1);
}

int main(int argCount, char **args) // char* args[]
{
    unsigned short int inputNumber = atoi(args[1]);
    long long unsigned int factorialNumber = findFactorial(inputNumber);
    printf("Factorial of %u is %lu", inputNumber, factorialNumber);
}
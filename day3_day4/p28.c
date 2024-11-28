#include <stdio.h>
#include <stdlib.h>
// p29 Count the number of Even digits in a number

int countEvenDigits(int n)
{
    int countOfEvenDigits = 0, remainderDigit = 0;
    while (n != 0)
    {
        remainderDigit = n % 10;
        n = n / 10;
        if (remainderDigit % 2 == 0)
            countOfEvenDigits++;
    }
    return countOfEvenDigits;
}

int main(int argCount, char *args[])
{
    int input_number = atoi(args[1]);
    printf("User given number is %d \n", input_number);
    int countOfEvenDigits = countEvenDigits(input_number);
    printf("Count of Even Digits = %d", countOfEvenDigits);
}
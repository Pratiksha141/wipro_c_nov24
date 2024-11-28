// program to print Math table of a number till multiples of of 20
#include <stdio.h>
#include <stdlib.h>

int main(int argCount, char *args[])
{
    int input_number1 = atoi(args[1]);
    int input_number2 = atoi(args[2]);
    for (int i = 1; i <= 20; i++)
    {
        printf("%d * %02d = %03d \t %d * %02d = %03d \n", input_number1, i, input_number1 * i, input_number2, i, input_number2 * i);
    }
}
/*
 7 * 1 = 7
 7 * 2 = 14
 */

#include <stdio.h>
#include <stdlib.h>
void swapNumbers(double, double);
// Swap 2 numbers.

int main(int argCount, char **args) // char* args[]
{
    double num1 = atof(args[1]);
    double num2 = atof(args[2]);
    printf("Before Swapping, Num1=%lf, Num2=%lf \n", num1, num2);
    swapNumbers(num1, num2);
    printf("After Swapping, Num1=%lf, Num2=%lf \n", num1, num2);
}

void swapNumbers(double num1, double num2)
{
    double temp = num1;
    num1 = num2;
    num2 = temp;
}
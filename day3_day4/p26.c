#include "math_table.c"
#include <stdlib.h>
 
int main(int argCount, char *args[])
{
    int inputNumber = atoi(args[1]);
    printMathTable(inputNumber);
}
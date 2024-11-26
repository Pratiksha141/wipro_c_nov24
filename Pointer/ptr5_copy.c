// To understand that a number is not an address
#include <stdio.h>
int main()
{
    int num1 = 50; // Assume address of num1 is 200
    int num2 = &num1;
    printf("%d  %d  %d  %d \n", num1 - 1, num1, num1 + 1, num1 + 2);
    printf("%d  %d  %d  %d \n", num2 - 1, num2, num2 + 1, num2 + 2);
}
/*
int num1 = 50; // The number 50 is stored in num1 which is correct
int num2 = &num1; // The address of num1 is stored in num2 as a number which is wrong
*/
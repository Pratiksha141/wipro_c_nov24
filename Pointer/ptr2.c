// To understand & and *
#include <stdio.h>

int main()
{
    float num = 5.5f;
    printf("Value of num = %f \n", num);
    // Thus when we say name of the variable, we get its value
    printf("Address of num = %p   %u \n", &num, &num);
    printf("Value at address of num = %f \n", *(&num));
}
/*
name of the variable is its value
Unary * can be applied only to an address. When we do so, we get value present in that address.
*/
// Understand the characteristic of an address

#include <stdio.h>
int main()
{
    double d = 2.22;
    char ch = 'A';
    printf("%u  %u  %u  %u \n", &d - 1, &d, &d + 1, &d + 2);
    printf("%u  %u  %u  %u \n", &ch - 1, &ch, &ch + 1, &ch + 2);
}
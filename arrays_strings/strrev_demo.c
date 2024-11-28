/*
Read 2 strings
source and destination
now find length of destination
now copy the source to the end of destination
*/
#include "strrev.h"
#include <stdio.h>

int main()
{
    char string1[32] = "";
    printf("Enter a string to reverse it: ");
    scanf("%s", string1); // &string1[0]

    strReverse(string1);

    printf("Reversed string is %s", string1);
}
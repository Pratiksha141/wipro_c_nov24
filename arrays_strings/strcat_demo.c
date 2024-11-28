/*
Read 2 strings
source and destination
now find length of destination
now copy the source to the end of destination
*/
#include "string_concatinate.h"
#include <stdio.h>

int main()
{
    char string1[32] = "";
    char string2[32] = "";

    printf("Enter string1: ");
    scanf("%s", string1); // &string1[0]
    printf("Enter string2: ");
    scanf("%s", string2); // &string[0]
    
    strCat(string1, string2);
    
    printf("Concatinated string is %s", string1);
}
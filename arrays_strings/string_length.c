#include <stdio.h>

int findStringLength(const char *userString)
{
    int i = 0;
    for (; userString[i] != '\0'; i++)
        ;
    return i;
}

int main()
{
    char userString[32] = "";
    puts("Enter a string to find its length");
    gets(userString);
    int length = findStringLength((const char *)userString);
    printf("Length of the string %s is %d", userString, length);
}
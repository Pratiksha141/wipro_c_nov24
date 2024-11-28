#include "strrev.h"

int strLength(const char *userString)
{
    int i = 0;
    for (; userString[i] != '\0'; i++)
        ;
    return i;
}

char *strReverse(char *my_str)
{
    int length = strLength(my_str);
    for (int i = 0, j = length - 1; i < j; i++, j--)
    {
        char temp = my_str[i];
        my_str[i] = my_str[j];
        my_str[j] = temp;
    }
    return my_str;
}
#include <stdio.h>
#include <string.h>

int main(int argCount, char *args[])
{
    char states[10][32] = {""};
    char capitals[10][32] = {""};
    char *addressOfSpace = NULL;
    int countOfChars = 0;

    for (int i = 1; i < argCount; i++)
    {
        addressOfSpace = strchr(args[i], ' ');
        countOfChars = addressOfSpace - args[i];
        strncpy(states[i - 1], args[i], countOfChars);
        strcpy(capitals[i - 1], addressOfSpace + 1);
    }

    printf("%-12s %-12s\n-------------------------\n", "STATE", "CAPITAL");
    for (int i = 0; i < argCount - 1; i++)
        printf("%-13s%s\n", states[i], capitals[i]);
}
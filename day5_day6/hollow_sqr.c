#include <stdio.h>
#include <stdlib.h>

int main(int argCount, char *args[])
{
    int numberOfLines = atoi(args[1]);

    for (int i = 1; i <= numberOfLines; i++)
    {
        if (i == 1 || i == numberOfLines)
        {
            for (int j = 1; j <= numberOfLines; j++)
            {
                putc('*', stdout);
                putc(' ', stdout);
            }
            putc('\n', stdout);
        }
        else
        {
            for (int j = 1; j <= numberOfLines; j++)
            {
                if (j == 1 || j == numberOfLines)
                {
                    putc('*', stdout);
                    putc(' ', stdout);
                }
                else
                {
                    putc(' ', stdout);
                    putc(' ', stdout);
                }
            }
            putc('\n', stdout);
        }
    }
}

/*
 * * * * *
 * * * * *
 * * * * *
 * * * * *
 * * * * *
 */
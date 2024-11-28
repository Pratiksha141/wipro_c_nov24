#include <stdio.h>
#include <stdlib.h>

int main(int argCount, char *args[])
{
    int numberOfLines = atoi(args[1]);

    for (int i = 1; i <= numberOfLines; i++)
    {
        for (int j = 1; j <= numberOfLines; j++)
        {
            if (i == j || j == numberOfLines - i + 1)
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

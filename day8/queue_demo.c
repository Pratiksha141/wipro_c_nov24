#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

int main()
{
    int size = 0, choice = 0, fp = -1, rp = -1;
    printf("Enter size of the Queue: ");
    scanf("%d", &size); // read size of stack from user

    float *ptr = (float *)malloc(sizeof(float) * size);
    do
    {
        printf("\n1:Insert 2:Delete 3:FirstElement 4:DisplayQ 5:Exit. Your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            rp = enQueue(ptr, rp, size);
            break;
        case 2:
            fp = deQueue(ptr, fp, rp);
            if (fp == -1)
                rp = -1;
            break;
        case 3:
            firstElement(ptr, fp, rp);
            break;
        case 4:
            displayQueue(ptr, fp, rp);
            break;
        case 5:
            choice = 0;
            break;
        default:
            puts("Invalid Input entered");
        }
    } while (choice != 0);
    free(ptr); // deallocate memory
    ptr = NULL;
    // Note that stk pointer is now a Dangling Pointer
    puts("End of Program");
}
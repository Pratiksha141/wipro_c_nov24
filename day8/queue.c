#include "queue.h"
#include <stdio.h>

int enQueue(float *que, int rp, int size)
{
    if (isFull(rp, size))
    {
        puts("Queue is Full");
        return rp;
    }
    rp++;
    printf("Enter the element to be inserted: ");
    scanf("%f", &que[rp]);
    return rp;
}

int deQueue(float *queue, int fp, int rp)
{
    if (isEmpty(fp, rp))
    {
        puts("Queue is Empty");
        return fp;
    }
    fp++;
    printf("Deleled element is %.2f \n", queue[fp]);
    // When ever we delete an element, we must check if the Q has become empty.
    if (fp == rp)
        fp = -1;
    return fp;
}

void displayQueue(const float *que, int fp, int rp)
{
    if (isEmpty(fp, rp))
    {
        puts("Queue is Empty");
        return;
    }
    printf("The Queue elements are: ");
    for (int i = fp + 1; i <= rp; i++)
        printf("%-7.2f", que[i]);
}

int isEmpty(int fp, int rp)
{
    if (rp == fp)
        return 1;
    return 0;
}

int isFull(int rp, int size)
{
    if (rp == size - 1)
        return 1;
    return 0;
}

void firstElement(const float *que, int fp, int rp)
{
    if (isEmpty(fp, rp))
    {
        puts("Queue is Empty");
        return;
    }
    printf("The front element is %.2f", que[fp + 1]);
}
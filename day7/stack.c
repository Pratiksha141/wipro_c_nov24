#include "stack.h"
#include <stdio.h>

int push(double *ptr, int sp, int size)
{
    if (sp == size - 1)
    {
        puts("Stack is Full");
        return sp;
    }
    sp++;
    printf("Enter new element to be pushed on the Stack: ");
    scanf("%lf", &ptr[sp]);
    printf("The Element %.2lf is pushed index %d \n", ptr[sp], sp);
    return sp;
}

int pop(double *stk, int sp)
{
    if (isEmpty(sp))
    {
        puts("Stack is empty");
        return sp;
    }
    printf("Popped element = %.2lf \n", stk[sp]);
    sp--;
    return sp;
}

void top(const double *stack, int sp)
{
    if (isEmpty(sp))
    {
        puts("Stack is empty");
        return;
    }
    printf("Top element = %.2lf \n", stack[sp]);
}

void displayStack(const double *ptr, int sp)
{
    if (isEmpty(sp))
    {
        puts("Stack is empty");
        return;
    }
    puts("Stack elements are:");
    for (int i = sp; i >= 0; i--)
        printf("%-8.2lf", ptr[i]);
}

int isEmpty(int sp)
{
    if (sp == -1)
        return 1;
    return 0;
}
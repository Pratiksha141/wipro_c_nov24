#include <stdio.h>
#include <stdlib.h>

int findSum(int *ptr, int size)
{
    if (size == 1)
        return ptr[0]; // *(ptr + 0)
    return ptr[size - 1] + findSum(ptr, size - 1);
}

int main(int argCount, char **args)
{
    int arraySize = atoi(args[1]);
    int array[50] = {0};
    printf("Enter %d numbers of the array \n", arraySize);
    for (int i = 0; i < arraySize; i++)
        scanf("%d", &array[i]); // &(*(array+i))

    int sum = findSum(array, arraySize); // &array[0]
    printf("Sum of Array numbers = %d", sum);
}
#include <stdio.h>
#include <stdlib.h>

int linearSearch(float *array, int arraySize, float searchNumber)
{
    int i = 0;
    for (; i < arraySize; i++)
    {
        if (array[i] == searchNumber)
            return i; // return index of 1st occurance of search ele
    }
    return -1; // search failed
}

float readUserData(float *ptr, int size)
{
    float searchElement = 0.0f;
    printf("Enter %d numbers of the array: \n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%f", &ptr[i]);
    }
    printf("Enter the element to be searched: ");
    scanf("%f", &searchElement);
    return searchElement;
}

int main(int argCount, char *args[])
{
    // User gives array size via command line
    int arraySize = atoi(args[1]);

    // create memory in heap to store array-size number of float values
    float *array = (float *)malloc(sizeof(float) * arraySize);

    // read the array elements and the search element
    float searchNumber = readUserData(array, arraySize);

    int index = linearSearch(array, arraySize, searchNumber);
    if (index == -1)
        printf("The Search Element %f not found in the array", searchNumber);
    else
        printf("The Search Element %f was found in the array at index %d", searchNumber, index);
}
// printf("Enter size of the array: ");
// scanf("%d", &arraySize);
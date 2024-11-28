// Find biggest and smallest elements of in an array
#include <stdio.h>
#include <stdlib.h>

int main(int argCount, char *args[]) {
    int arraySize = atoi(args[1]);
    double array[50] = {0.0};
    double smallNumber = 0.0, bigNumber = 0.0;
    printf("Enter %d elements of the array:", arraySize);
    for (int i = 0; i < arraySize; i++) {
        scanf("%lf", &array[i]);
    }
    smallNumber = bigNumber = array[0];
    for (int i = 1; i < arraySize; i++) {
        if (smallNumber > array[i])
            smallNumber = array[i];
        if (bigNumber < array[i])
            bigNumber = array[i];
    }
    printf("Small Number = %.2lf,  Big Number = %.2lf", smallNumber, bigNumber);
    return 0;
}
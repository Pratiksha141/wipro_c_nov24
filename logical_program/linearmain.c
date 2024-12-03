// main.c
#include <stdio.h>
#include "search.h"

int main() {
    int n, target, result;

    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];  

    
    printf("Enter %d elements of the array: \n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    printf("Enter the element to search: ");
    scanf("%d", &target);

    
    result = linearSearch(arr, n, target);

    
    if (result != -1) {
        printf("Element %d found at index %d.\n", target, result);
    } else {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}

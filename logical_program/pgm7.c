//Count the times an element is present in an Array.
#include <stdio.h>


int countOccurrences(int arr[], int n, int target) {
    int count = 0;
    
    
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            count++;
        }
    }
    
    return count;
}

int main() {
    int n, target;
    
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    
    int arr[n];

    
    printf("Enter %d elements of the array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    printf("Enter the element to count: ");
    scanf("%d", &target);


    int count = countOccurrences(arr, n, target);

    printf("The element %d is present %d times in the array.\n", target, count);

    return 0;
}

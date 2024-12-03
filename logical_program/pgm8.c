//Remove duplicate elements from the Array and shift the elements.
#include <stdio.h>

int removeDuplicates(int arr[], int n) {
    int k = 0;  
    for (int i = 0; i < n; i++) {
        int j;
        
        for (j = 0; j < k; j++) {
            if (arr[i] == arr[j]) {
                break;
            }
        }

        
        if (j == k) {
            arr[k++] = arr[i];
        }
    }

    return k;  
    }

int main() {
    int n;  
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements of the array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    int newSize = removeDuplicates(arr, n);
    printf("Array after removing duplicates and shifting elements:\n");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

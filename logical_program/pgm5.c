//Swap the 1st half of an Array with the 2nd half elements.
#include <stdio.h>


void swapHalves(int arr[], int n) {
    int mid = n / 2;

    
    for (int i = 0; i < mid; i++) {
        int temp = arr[i];
        arr[i] = arr[mid + i];
        arr[mid + i] = temp;
    }
}

int main() {
    int n;

    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Array size should be at least 2 to swap halves.\n");
        return 0;
    }

    int arr[n]; 

    
    printf("Enter %d elements of the array: \n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    swapHalves(arr, n);

    printf("The array after swapping halves is: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}


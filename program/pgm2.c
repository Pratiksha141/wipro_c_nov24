//Find the smallest and biggest elements of the array of size N which is given by user
#include <stdio.h>

void findSmallestAndLargest(int arr[], int n, int *smallest, int *largest) {
    *smallest = arr[0];
    *largest = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < *smallest) {
            *smallest = arr[i];
        }
        if (arr[i] > *largest) {
            *largest = arr[i];
        }
    }
}

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int smallest, largest;
    findSmallestAndLargest(arr, n, &smallest, &largest);
    printf("The smallest element in the array is: %d\n", smallest);
    printf("The largest element in the array is: %d\n", largest);

    return 0;
}

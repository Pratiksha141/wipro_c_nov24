#include <stdio.h>

int find_smallest(int arr[], int n) {
    // Assume the first element is the smallest
    int smallest = arr[0];

    // Loop through the array to find the smallest number
    for (int i = 1; i < n; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    return smallest;
}

int main() {
    // Example array
    int arr[] = {5, 2, 9, 1, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Find and print the smallest number
    int smallest = find_smallest(arr, n);
    printf("The smallest number in the array is: %d\n", smallest);

    return 0;
}
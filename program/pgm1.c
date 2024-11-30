//Find sum of the elements of an Array using a recursive function.
#include <stdio.h>

int sumArray(int arr[], int n) {
    
    if (n <= 0) {
        return 0;
    } else {
    
        return arr[n - 1] + sumArray(arr, n - 1);
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

    int result = sumArray(arr, n);

    printf("The sum of the elements in the array is: %d\n", result);

    return 0;
}

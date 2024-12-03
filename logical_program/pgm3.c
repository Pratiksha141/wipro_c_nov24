//Swap consecutive elements of an Array using a for loop.
#include <stdio.h>

void swapConsecutive(int arr[], int n) {
    for (int i = 0; i < n - 1; i += 2) {
        // Swap arr[i] and arr[i+1]
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }
}

int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];  

    
    printf("Enter %d elements of the array: \n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

   
    swapConsecutive(arr, n);

    
    printf("The array after swapping consecutive elements is: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

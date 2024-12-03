//Convert the Odd elements in an array to Even numbers by adding one and Convert the Even elements into Odd by subtracting 1.
#include <stdio.h>

int main() {
    int n;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d elements of the array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
    
            arr[i] = arr[i] - 1;
        } else {
            arr[i] = arr[i] + 1;
        }
    }
    
    printf("Array after conversion:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}

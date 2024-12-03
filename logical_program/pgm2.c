//Reverse the elements of an Array using a while loop.
#include <stdio.h>
void reverseArray(int arr[], int n) {
    int start = 0;          
    int end = n - 1;        
    int temp;

    while (start < end) {
        
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

                start++;
        end--;
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

    
    reverseArray(arr, n);

    
    printf("The reversed array is: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

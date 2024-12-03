//Find sum of the elements of an Array using a recursive function.
#include <stdio.h>
int sum(int arr[], int n) 
{
    if (n == 0)
        return 0;
    
        return arr[n - 1] + sum(arr, n - 1);
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
    int result = sum(arr, n);
    printf("The sum of the array elements is: %d\n", result);

    return 0;
}

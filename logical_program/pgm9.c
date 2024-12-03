//Find the smallest and biggest elements of the array of size N which is given by user.
#include <stdio.h>

int main() {
    int N;
    
    printf("Enter the number of elements in the array: ");
    scanf("%ld", &N);
    

    double arr[N];
    
    printf("Enter %d elements of the array:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%lf", &arr[i]);
    }
    
    double smallest = arr[0];
    double largest = arr[0];
    

    for (int i = 1; i < N; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    
    printf("Smallest element: %.2lf\n", smallest);
    printf("Largest element: %.2lf\n", largest);
    
    return 0;
}

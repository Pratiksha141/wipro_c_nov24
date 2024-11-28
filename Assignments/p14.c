#include <stdio.h>
#include <math.h>  // For sqrt() function

// Function to check if a number is a perfect square
int isPerfectSquare(int n)
 {
    if (n < 0) {
        return 0;  // Negative numbers cannot be perfect squares
    }

    int root = sqrt(n);  // Find the square root of n
    return (root * root == n);  // If the square of root equals n, it's a perfect square
}

int main() {
    int num;
    
    // Read a number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is a perfect square
    if (isPerfectSquare(num)) {
        printf("%d is a perfect square.\n", num);
    } else {
        printf("%d is not a perfect square.\n", num);
    }

    return 0;
}
#include <stdio.h>

int main() {
    int a, b, c;

    // Input the three distinct numbers
    printf("Enter three distinct numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Find the largest number using the ternary operator
    int largest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    // Output the result
    printf("The largest number is: %d\n", largest);

    return 0;
}
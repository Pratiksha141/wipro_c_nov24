//Find sum of Odd digits in a number
#include <stdio.h>

int main() {
    int number, digit, sum = 0;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Process each digit of the number
    while (number != 0) {
        // Get the last digit
        digit = number % 10;

        // Check if the digit is odd
        if (digit % 2 != 0) {
            sum += digit;  // Add odd digit to the sum
        }

        // Remove the last digit
        number = number / 10;
    }

    // Output the sum of odd digits
    printf("The sum of odd digits is: %d\n", sum);

    return 0;
}
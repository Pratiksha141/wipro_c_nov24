//Find sum of Odd placed Odd digits in a number
#include <stdio.h>

int main() {
    int number, digit, sum = 0, position = 1;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Process each digit of the number
    while (number != 0) {
        // Get the last digit
        digit = number % 10;

        // Check if the digit is odd and the position is odd
        if (digit % 2 != 0 && position % 2 != 0) {
            sum += digit;  // Add the digit to the sum if both conditions are met
        }

        // Remove the last digit
        number = number / 10;

        // Increment the position counter
        position++;
    }

    // Output the sum of odd-placed odd digits
    printf("The sum of odd-placed odd digits is: %d\n", sum);

    return 0;
}
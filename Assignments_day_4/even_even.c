//Find sum of Even placed Even digits in a number
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

        // Check if the digit is even and the position is even
        if (digit % 2 == 0 && position % 2 == 0) {
            sum += digit;  // Add the digit to the sum if both conditions are met
        }

        // Remove the last digit
        number = number / 10;

        // Increment the position counter
        position++;
    }
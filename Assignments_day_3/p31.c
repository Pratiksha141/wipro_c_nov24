//Check if a number is Palindrome
#include <stdio.h>

int main() {
    int number, originalNumber, reversedNumber = 0, remainder;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Store the original number
    originalNumber = number;

    // Reverse the number
    while (number != 0) {
        remainder = number % 10;            // Get the last digit
        reversedNumber = reversedNumber * 10 + remainder;  // Build the reversed number
        number = number / 10;               // Remove the last digit
    }

    // Check if the original number is equal to the reversed number
    if (originalNumber == reversedNumber) {
        printf("The number is a palindrome.\n");
    } else {
        printf("The number is not a palindrome.\n");
    }

    return 0;
}
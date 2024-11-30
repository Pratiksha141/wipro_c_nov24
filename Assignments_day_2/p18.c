#include <stdio.h>
#include <ctype.h>  // For islower() function

int main() {
    char ch;

    // Ask the user to enter a character
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if the character is a lowercase letter using islower()
    if (islower(ch)) {
        printf("%c is a lowercase letter.\n", ch);
    } else {
        printf("%c is not a lowercase letter.\n", ch);
    }

    return 0;
}
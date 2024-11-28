#include <stdio.h>
#include <ctype.h>  // For isalnum() function

int main() {
    char ch;

    // Ask the user to enter a character
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if the character is alphanumeric using isalnum()
    if (isalnum(ch)) {
        printf("%c is an alphanumeric character.\n", ch);
    } else {
        printf("%c is not an alphanumeric character.\n", ch);
    }

    return 0;
}
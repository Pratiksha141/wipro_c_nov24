int main()
 {
    char ch;

    // Ask the user to enter a character
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if the character is a digit using isdigit()
    if (isdigit(ch)) {
        printf("%c is a digit.\n", ch);
    } else {
        printf("%c is not a digit.\n", ch);
    }

    return 0;
}